// Implements ATAPI command handlers for emulating a CD-ROM drive.

#pragma once

#include "ide_atapi.h"
#include <CUEParser.h>

class IDECDROMDevice: public IDEATAPIDevice
{
public:
    virtual void initialize(int devidx) override;

    virtual void set_image(IDEImage *image);

    virtual uint64_t capacity_lba() override;

protected:
    
    virtual bool handle_atapi_command(const uint8_t *cmd);
    virtual bool atapi_set_cd_speed(const uint8_t *cmd);
    virtual bool atapi_read_disc_information(const uint8_t *cmd);
    virtual bool atapi_read_track_information(const uint8_t *cmd);
    virtual bool atapi_read_sub_channel(const uint8_t *cmd);
    virtual bool atapi_read_toc(const uint8_t *cmd);
    virtual bool atapi_read_header(const uint8_t *cmd);
    virtual bool atapi_read_cd(const uint8_t *cmd);
    virtual bool atapi_read_cd_msf(const uint8_t *cmd);

    bool doReadTOC(bool MSF, uint8_t track, uint16_t allocationLength);
    bool doReadSessionInfo(bool MSF, uint16_t allocationLength);
    bool doReadFullTOC(uint8_t session, uint16_t allocationLength, bool useBCD);
    bool doReadSubChannel(bool time, bool subq, uint8_t parameter, uint8_t track_number, uint16_t allocation_length);


    void cdromGetAudioPlaybackStatus(uint8_t *status, uint32_t *current_lba, bool current_only);


    // Read handling, possible conversion of sector formats
    struct {
        int sector_length_file; // Sector length in backing image file
        int sector_length_out; // Sector length output to IDE bus
        int sector_data_skip; // Skip number of bytes at beginning of file sector
        int sector_data_length; // Number of bytes of sector data to copy
        bool add_fake_headers;
        bool field_q_subchannel;
        CUETrackInfo trackinfo;
        uint32_t start_lba;
        uint32_t sectors_done;
    } m_cd_read_format;

    // Read handling and sector format translation if needed
    virtual bool doRead(uint32_t lba, uint32_t transfer_len) override;
    bool doReadCD(uint32_t lba, uint32_t length, uint8_t sector_type,
                  uint8_t main_channel, uint8_t sub_channel, bool data_only);
    virtual ssize_t read_callback(const uint8_t *data, size_t blocksize, size_t num_blocks);

    // Access data from CUE sheet, or dummy data if no cue sheet provided
    char m_cuesheet[1024];
    CUEParser m_cueparser;
    bool loadAndValidateCueSheet(const char *cuesheetname);
    bool getFirstLastTrackInfo(CUETrackInfo &first, CUETrackInfo &last);
    uint32_t getLeadOutLBA(const CUETrackInfo* lasttrack);
    CUETrackInfo getTrackFromLBA(uint32_t lba);

    // ATAPI configuration pages
    virtual size_t atapi_get_configuration(uint16_t feature, uint8_t *buffer, size_t max_bytes) override;

    // ATAPI mode pages
    virtual size_t atapi_get_mode_page(uint8_t page_ctrl, uint8_t page_idx, uint8_t *buffer, size_t max_bytes) override;
};
