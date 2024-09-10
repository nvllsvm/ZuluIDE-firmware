// -------------------------------------------------- //
// This file is autogenerated by pioasm; do not edit! //
// -------------------------------------------------- //

#pragma once

#if !PICO_NO_HARDWARE
#include "hardware/pio.h"
#endif

// ------------ //
// pio_i2s_mclk //
// ------------ //

#define pio_i2s_mclk_wrap_target 0
#define pio_i2s_mclk_wrap 1

static const uint16_t pio_i2s_mclk_program_instructions[] = {
    //     .wrap_target
    0xe001, //  0: set    pins, 1
    0xe000, //  1: set    pins, 0
    //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program pio_i2s_mclk_program = {
    .instructions = pio_i2s_mclk_program_instructions,
    .length = 2,
    .origin = -1,
};

static inline pio_sm_config pio_i2s_mclk_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + pio_i2s_mclk_wrap_target, offset + pio_i2s_mclk_wrap);
    return c;
}
#endif

// ----------- //
// pio_i2s_out //
// ----------- //

#define pio_i2s_out_wrap_target 0
#define pio_i2s_out_wrap 7

static const uint16_t pio_i2s_out_program_instructions[] = {
    //     .wrap_target
    0xa822, //  0: mov    x, y            side 1
    0x6001, //  1: out    pins, 1         side 0
    0x0841, //  2: jmp    x--, 1          side 1
    0x7001, //  3: out    pins, 1         side 2
    0xb822, //  4: mov    x, y            side 3
    0x7001, //  5: out    pins, 1         side 2
    0x1845, //  6: jmp    x--, 5          side 3
    0x6001, //  7: out    pins, 1         side 0
    //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program pio_i2s_out_program = {
    .instructions = pio_i2s_out_program_instructions,
    .length = 8,
    .origin = -1,
};

static inline pio_sm_config pio_i2s_out_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + pio_i2s_out_wrap_target, offset + pio_i2s_out_wrap);
    sm_config_set_sideset(&c, 2, false, false);
    return c;
}
#endif

// ---------------- //
// pio_i2s_out_swap //
// ---------------- //

#define pio_i2s_out_swap_wrap_target 0
#define pio_i2s_out_swap_wrap 7

static const uint16_t pio_i2s_out_swap_program_instructions[] = {
    //     .wrap_target
    0xb022, //  0: mov    x, y            side 2
    0x6001, //  1: out    pins, 1         side 0
    0x1041, //  2: jmp    x--, 1          side 2
    0x6801, //  3: out    pins, 1         side 1
    0xb822, //  4: mov    x, y            side 3
    0x6801, //  5: out    pins, 1         side 1
    0x1845, //  6: jmp    x--, 5          side 3
    0x6001, //  7: out    pins, 1         side 0
    //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program pio_i2s_out_swap_program = {
    .instructions = pio_i2s_out_swap_program_instructions,
    .length = 8,
    .origin = -1,
};

static inline pio_sm_config pio_i2s_out_swap_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + pio_i2s_out_swap_wrap_target, offset + pio_i2s_out_swap_wrap);
    sm_config_set_sideset(&c, 2, false, false);
    return c;
}
#endif

// ----------- //
// pio_tdm_out //
// ----------- //

#define pio_tdm_out_wrap_target 0
#define pio_tdm_out_wrap 3

static const uint16_t pio_tdm_out_program_instructions[] = {
    //     .wrap_target
    0xb822, //  0: mov    x, y            side 3
    0x6001, //  1: out    pins, 1         side 0
    0x0841, //  2: jmp    x--, 1          side 1
    0x7001, //  3: out    pins, 1         side 2
    //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program pio_tdm_out_program = {
    .instructions = pio_tdm_out_program_instructions,
    .length = 4,
    .origin = -1,
};

static inline pio_sm_config pio_tdm_out_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + pio_tdm_out_wrap_target, offset + pio_tdm_out_wrap);
    sm_config_set_sideset(&c, 2, false, false);
    return c;
}
#endif

// ---------------- //
// pio_tdm_out_swap //
// ---------------- //

#define pio_tdm_out_swap_wrap_target 0
#define pio_tdm_out_swap_wrap 3

static const uint16_t pio_tdm_out_swap_program_instructions[] = {
    //     .wrap_target
    0xb822, //  0: mov    x, y            side 3
    0x6001, //  1: out    pins, 1         side 0
    0x1041, //  2: jmp    x--, 1          side 2
    0x6801, //  3: out    pins, 1         side 1
    //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program pio_tdm_out_swap_program = {
    .instructions = pio_tdm_out_swap_program_instructions,
    .length = 4,
    .origin = -1,
};

static inline pio_sm_config pio_tdm_out_swap_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + pio_tdm_out_swap_wrap_target, offset + pio_tdm_out_swap_wrap);
    sm_config_set_sideset(&c, 2, false, false);
    return c;
}
#endif

// ------------ //
// pio_lsbj_out //
// ------------ //

#define pio_lsbj_out_wrap_target 0
#define pio_lsbj_out_wrap 7

static const uint16_t pio_lsbj_out_program_instructions[] = {
    //     .wrap_target
    0xa822, //  0: mov    x, y            side 1
    0x7001, //  1: out    pins, 1         side 2
    0x1841, //  2: jmp    x--, 1          side 3
    0x7001, //  3: out    pins, 1         side 2
    0xb822, //  4: mov    x, y            side 3
    0x6001, //  5: out    pins, 1         side 0
    0x0845, //  6: jmp    x--, 5          side 1
    0x6001, //  7: out    pins, 1         side 0
    //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program pio_lsbj_out_program = {
    .instructions = pio_lsbj_out_program_instructions,
    .length = 8,
    .origin = -1,
};

static inline pio_sm_config pio_lsbj_out_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + pio_lsbj_out_wrap_target, offset + pio_lsbj_out_wrap);
    sm_config_set_sideset(&c, 2, false, false);
    return c;
}
#endif

// ----------------- //
// pio_lsbj_out_swap //
// ----------------- //

#define pio_lsbj_out_swap_wrap_target 0
#define pio_lsbj_out_swap_wrap 7

static const uint16_t pio_lsbj_out_swap_program_instructions[] = {
    //     .wrap_target
    0xb022, //  0: mov    x, y            side 2
    0x6801, //  1: out    pins, 1         side 1
    0x1841, //  2: jmp    x--, 1          side 3
    0x6801, //  3: out    pins, 1         side 1
    0xb822, //  4: mov    x, y            side 3
    0x6001, //  5: out    pins, 1         side 0
    0x1045, //  6: jmp    x--, 5          side 2
    0x6001, //  7: out    pins, 1         side 0
    //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program pio_lsbj_out_swap_program = {
    .instructions = pio_lsbj_out_swap_program_instructions,
    .length = 8,
    .origin = -1,
};

static inline pio_sm_config pio_lsbj_out_swap_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + pio_lsbj_out_swap_wrap_target, offset + pio_lsbj_out_swap_wrap);
    sm_config_set_sideset(&c, 2, false, false);
    return c;
}
#endif

// ---------- //
// pio_i2s_in //
// ---------- //

#define pio_i2s_in_wrap_target 0
#define pio_i2s_in_wrap 7

static const uint16_t pio_i2s_in_program_instructions[] = {
    //     .wrap_target
    0xa022, //  0: mov    x, y            side 0
    0x4801, //  1: in     pins, 1         side 1
    0x0041, //  2: jmp    x--, 1          side 0
    0x5801, //  3: in     pins, 1         side 3
    0xb022, //  4: mov    x, y            side 2
    0x5801, //  5: in     pins, 1         side 3
    0x1045, //  6: jmp    x--, 5          side 2
    0x4801, //  7: in     pins, 1         side 1
    //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program pio_i2s_in_program = {
    .instructions = pio_i2s_in_program_instructions,
    .length = 8,
    .origin = -1,
};

static inline pio_sm_config pio_i2s_in_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + pio_i2s_in_wrap_target, offset + pio_i2s_in_wrap);
    sm_config_set_sideset(&c, 2, false, false);
    return c;
}
#endif

// --------------- //
// pio_i2s_in_swap //
// --------------- //

#define pio_i2s_in_swap_wrap_target 0
#define pio_i2s_in_swap_wrap 7

static const uint16_t pio_i2s_in_swap_program_instructions[] = {
    //     .wrap_target
    0xa022, //  0: mov    x, y            side 0
    0x5001, //  1: in     pins, 1         side 2
    0x0041, //  2: jmp    x--, 1          side 0
    0x5801, //  3: in     pins, 1         side 3
    0xa822, //  4: mov    x, y            side 1
    0x5801, //  5: in     pins, 1         side 3
    0x0845, //  6: jmp    x--, 5          side 1
    0x5001, //  7: in     pins, 1         side 2
    //     .wrap
};

#if !PICO_NO_HARDWARE
static const struct pio_program pio_i2s_in_swap_program = {
    .instructions = pio_i2s_in_swap_program_instructions,
    .length = 8,
    .origin = -1,
};

static inline pio_sm_config pio_i2s_in_swap_program_get_default_config(uint offset) {
    pio_sm_config c = pio_get_default_sm_config();
    sm_config_set_wrap(&c, offset + pio_i2s_in_swap_wrap_target, offset + pio_i2s_in_swap_wrap);
    sm_config_set_sideset(&c, 2, false, false);
    return c;
}

static inline void pio_i2s_MCLK_program_init(PIO pio, uint sm, uint offset, uint MCLK_pin) {
    pio_gpio_init(pio, MCLK_pin);
    pio_sm_set_consecutive_pindirs(pio, sm, MCLK_pin, 1, true);
    pio_sm_config sm_config = pio_i2s_mclk_program_get_default_config(offset);
    sm_config_set_set_pins(&sm_config, MCLK_pin, 1);
    pio_sm_init(pio, sm, offset, &sm_config);
}
static inline void pio_i2s_out_program_init(PIO pio, uint sm, uint offset, uint data_pin, uint clock_pin_base, uint bits, bool swap) {
    pio_gpio_init(pio, data_pin);
    pio_gpio_init(pio, clock_pin_base);
    pio_gpio_init(pio, clock_pin_base + 1);
    pio_sm_config sm_config = pio_i2s_out_program_get_default_config(offset);
    sm_config_set_out_pins(&sm_config, data_pin, 1);
    sm_config_set_sideset_pins(&sm_config, clock_pin_base);
    sm_config_set_out_shift(&sm_config, false, true, bits);
    sm_config_set_fifo_join(&sm_config, PIO_FIFO_JOIN_TX);
    pio_sm_init(pio, sm, offset, &sm_config);
    uint pin_mask = (1u << data_pin) | (3u << clock_pin_base);
    pio_sm_set_pindirs_with_mask(pio, sm, pin_mask, pin_mask);
    pio_sm_set_pins(pio, sm, 0); // clear pins
    pio_sm_exec(pio, sm, pio_encode_set(pio_y, bits - 2));
}
static inline void pio_tdm_out_program_init(PIO pio, uint sm, uint offset, uint data_pin, uint clock_pin_base, uint bits, bool swap, uint channels) {
    pio_gpio_init(pio, data_pin);
    pio_gpio_init(pio, clock_pin_base);
    pio_gpio_init(pio, clock_pin_base + 1);
    pio_sm_config sm_config = swap ? pio_tdm_out_swap_program_get_default_config(offset) : pio_tdm_out_program_get_default_config(offset);
    sm_config_set_out_pins(&sm_config, data_pin, 1);
    sm_config_set_sideset_pins(&sm_config, clock_pin_base);
    sm_config_set_out_shift(&sm_config, false, true, 32);
    sm_config_set_fifo_join(&sm_config, PIO_FIFO_JOIN_TX);
    pio_sm_init(pio, sm, offset, &sm_config);
    uint pin_mask = (1u << data_pin) | (3u << clock_pin_base);
    pio_sm_set_pindirs_with_mask(pio, sm, pin_mask, pin_mask);
    pio_sm_set_pins(pio, sm, 0); // clear pins
    // Can't set constant > 31, so push and pop/mov
    pio_sm_put_blocking(pio, sm, bits * channels - 2);
    pio_sm_exec(pio, sm, pio_encode_pull(false, false));
    pio_sm_exec(pio, sm, pio_encode_mov(pio_y, pio_osr));
    // Need to make OSR believe there's nothing left to shift out, or the 1st word will be the count we just passed in, not a sample
    pio_sm_exec(pio, sm, pio_encode_out(pio_osr, 32));
}
static inline void pio_lsbj_out_program_init(PIO pio, uint sm, uint offset, uint data_pin, uint clock_pin_base, uint bits, bool swap) {
    pio_gpio_init(pio, data_pin);
    pio_gpio_init(pio, clock_pin_base);
    pio_gpio_init(pio, clock_pin_base + 1);
    pio_sm_config sm_config = swap ? pio_lsbj_out_swap_program_get_default_config(offset) : pio_lsbj_out_program_get_default_config(offset);
    sm_config_set_out_pins(&sm_config, data_pin, 1);
    sm_config_set_sideset_pins(&sm_config, clock_pin_base);
    sm_config_set_out_shift(&sm_config, false, true, (bits <= 16) ? 2 * bits : bits);
    sm_config_set_fifo_join(&sm_config, PIO_FIFO_JOIN_TX);
    pio_sm_init(pio, sm, offset, &sm_config);
    uint pin_mask = (1u << data_pin) | (3u << clock_pin_base);
    pio_sm_set_pindirs_with_mask(pio, sm, pin_mask, pin_mask);
    pio_sm_set_pins(pio, sm, 0); // clear pins
    pio_sm_exec(pio, sm, pio_encode_set(pio_y, bits - 2));
}
static inline void pio_i2s_in_program_init(PIO pio, uint sm, uint offset, uint data_pin, uint clock_pin_base, uint bits, bool swap) {
    pio_gpio_init(pio, data_pin);
    pio_gpio_init(pio, clock_pin_base);
    pio_gpio_init(pio, clock_pin_base + 1);
    pio_sm_config sm_config = swap ? pio_i2s_in_swap_program_get_default_config(offset) : pio_i2s_in_program_get_default_config(offset);
    sm_config_set_in_pins(&sm_config, data_pin);
    sm_config_set_sideset_pins(&sm_config, clock_pin_base);
    sm_config_set_in_shift(&sm_config, false, true, (bits <= 16) ? 2 * bits : bits);
    sm_config_set_fifo_join(&sm_config, PIO_FIFO_JOIN_RX);
    pio_sm_init(pio, sm, offset, &sm_config);
    uint pin_mask = 3u << clock_pin_base;
    pio_sm_set_pindirs_with_mask(pio, sm, pin_mask, pin_mask);
    pio_sm_set_pins(pio, sm, 0); // clear pins
    pio_sm_exec(pio, sm, pio_encode_set(pio_y, bits - 2));
}

#endif

