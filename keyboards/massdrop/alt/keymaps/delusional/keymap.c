#include QMK_KEYBOARD_H

enum alt_keycodes {
    U_T_AUTO = SAFE_RANGE, //USB Extra Port Toggle Auto Detect / Always Active
    U_T_AGCR,              //USB Toggle Automatic GCR control
    DBG_TOG,               //DEBUG Toggle On / Off
    DBG_MTRX,              //DEBUG Toggle Matrix Prints
    DBG_KBD,               //DEBUG Toggle Keyboard Prints
    DBG_MOU,               //DEBUG Toggle Mouse Prints
    MD_BOOT,               //Restart into bootloader after hold timeout
};

#define COL_RED 0x017D1246
#define COL_MOD 0x010C4383
#define COL_HOD 0x0122A0B6
#define COL_MVE 0x0159AC12
#define COL_NUM 0x01BD560D
#define COL_YEL 0x01FFFF00
#define COL_TRQ 0x01EB649F
#define COL_LAY 0x01BD560D
#define COL_TRN KC_TRNS

const uint32_t PROGMEM colmap[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        COL_TRQ, COL_TRQ, COL_TRQ, COL_TRQ, COL_TRQ, COL_TRQ, COL_TRQ, COL_TRQ, COL_TRQ, COL_TRQ, COL_TRQ, COL_TRQ, COL_TRQ, COL_MOD, COL_MOD, \
        COL_MOD, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_MOD, COL_MOD, \
        COL_MOD, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED,          COL_MOD, COL_MOD, \
        COL_MOD, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_RED, COL_MOD,          COL_RED, COL_MOD, \
        COL_MOD, COL_MOD, COL_MOD,                            COL_MOD,                            COL_MOD, COL_MOD, COL_RED, COL_RED, COL_RED  \
    ),
    [1] = LAYOUT(
        KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS  \
    ),
    [2] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,          KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS  \
    ),
    [4] = LAYOUT(
        KC_NO,   COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, \
        COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, \
        COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_NUM, COL_NUM, COL_NUM, COL_NUM, COL_TRN, COL_TRN,          COL_TRN, COL_HOD, \
        COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN, COL_TRN,          COL_TRQ, COL_HOD, \
        COL_TRN, COL_TRN, COL_TRN,                            COL_TRN,                            COL_TRN, COL_TRN, COL_TRQ, COL_TRQ, COL_TRQ  \
    ),
};

extern layer_state_t default_layer_state;
#define color_layers 0b00000000000000000000000000011111
layer_state_t layer_state_set_user(layer_state_t state) {
    layer_state_t colayers = (state | default_layer_state) & color_layers;

    uint8_t led[4]; // Maximum 4 leds per button
    uint8_t led_count = 0;

    for(uint8_t y = 0; y < MATRIX_ROWS; y++) {
        for(uint8_t x = 0; x < MATRIX_COLS; x++) {
            uint32_t colVal = 0; 
            for (int8_t i = sizeof(layer_state_t) * 8 - 1; i >= 0; i--) {
                // Layer 0 is always enabled.
                if (i == 0 || colayers & (1UL << i)) {
                    colVal = colmap[i][y][x];
                    if(colVal != KC_TRNS)
                        break;
                }
            }
            if(colVal == KC_NO) {
                // It's already black
            } else if((colVal & 0xFF000000) == 0) {
                continue;
            }

            uint8_t r = (colVal >> 16) & 0xFF;
            uint8_t g = (colVal >>  8) & 0xFF;
            uint8_t b = (colVal >>  0) & 0xFF;
            led_count = rgb_matrix_map_row_column_to_led(y, x, led);
            for(uint8_t i = 0; i < led_count; i++) {
                rgb_matrix_set_color(led[i], r, g, b);
            }
        }
    }
    return state;
}

#define TG_NKRO MAGIC_TOGGLE_NKRO //Toggle 6KRO / NKRO mode

keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        MO(4),          KC_1,         KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,        KC_EQL,  KC_BSPC, KC_DEL,  \
        KC_TAB,         KC_Q,         KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,        KC_RBRC, KC_BSLS, KC_HOME, \
        KC_ESC,         KC_A,         KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                 KC_ENT,  KC_PGUP, \
        KC_LSFT,        KC_Z,         KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSHIFT,      KC_UP,   KC_PGDN, \
        KC_LCTL,        OSM(MOD_LGUI),KC_LALT,                            KC_SPC,                             KC_RALT, OSM(MOD_RGUI),  KC_LEFT, KC_DOWN, KC_RGHT  \
    ),
    // Disable half the keyboard depending on which shift key we've pressed
    [1] = LAYOUT(
        KC_TRNS,        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS,        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS,        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, \
        KC_TRNS,        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                 KC_TRNS, KC_TRNS, \
        KC_TRNS,        KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS  \
    ),
    [2] = LAYOUT(
        KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,          KC_NO,   KC_TRNS, KC_TRNS, \
        KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,          KC_NO,   KC_NO,   KC_TRNS, \
        KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                   KC_TRNS, KC_TRNS, \
        KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,                 KC_TRNS, KC_TRNS, \
        KC_TRNS,        KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS  \
    ),
    // FN layer
    [4] = LAYOUT(
        KC_TRNS,        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,         KC_F12,  KC_DEL,  KC_MUTE, \
        KC_TRNS,        RGB_SPD, RGB_VAI, RGB_SPI, RGB_HUI, RGB_SAI, KC_GRV,  U_T_AUTO,U_T_AGCR,KC_TRNS, KC_PSCR, KC_SLCK,        KC_PAUS, KC_TRNS, KC_END, \
        KC_CAPS,        RGB_RMOD,RGB_VAD, RGB_MOD, RGB_HUD, RGB_SAD, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_TRNS, KC_TRNS,                 KC_TRNS, KC_VOLU, \
        KC_TRNS,        RGB_TOG, KC_TRNS, KC_TRNS, KC_TRNS, MD_BOOT, TG_NKRO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                 KC_MEDIA_PLAY_PAUSE, KC_VOLD, \
        KC_TRNS,        KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS,        KC_MEDIA_PREV_TRACK, KC_PGDN, KC_MEDIA_NEXT_TRACK  \
    ),
    /*
    [X] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS  \
    ),
    */
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
};

#define MODS_SHIFT  (get_mods() & MOD_BIT(KC_LSHIFT) || get_mods() & MOD_BIT(KC_RSHIFT))
#define MODS_CTRL  (get_mods() & MOD_BIT(KC_LCTL) || get_mods() & MOD_BIT(KC_RCTRL))
#define MODS_ALT  (get_mods() & MOD_BIT(KC_LALT) || get_mods() & MOD_BIT(KC_RALT))

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;

    switch (keycode) {
        case U_T_AUTO:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_extra_manual, "USB extra port manual mode");
            }
            return false;
        case U_T_AGCR:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
            }
            return false;
        case DBG_TOG:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_enable, "Debug mode");
            }
            return false;
        case DBG_MTRX:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_matrix, "Debug matrix");
            }
            return false;
        case DBG_KBD:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_keyboard, "Debug keyboard");
            }
            return false;
        case DBG_MOU:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_mouse, "Debug mouse");
            }
            return false;
        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= 500) {
                    reset_keyboard();
                }
            }
            return false;
        case RGB_TOG:
            if (record->event.pressed) {
              switch (rgb_matrix_get_flags()) {
                case LED_FLAG_ALL: {
                    rgb_matrix_set_flags(LED_FLAG_KEYLIGHT);
                    rgb_matrix_set_color_all(0, 0, 0);
                  }
                  break;
                case LED_FLAG_KEYLIGHT: {
                    rgb_matrix_set_flags(LED_FLAG_UNDERGLOW);
                    rgb_matrix_set_color_all(0, 0, 0);
                  }
                  break;
                case LED_FLAG_UNDERGLOW: {
                    rgb_matrix_set_flags(LED_FLAG_NONE);
                    rgb_matrix_disable_noeeprom();
                  }
                  break;
                default: {
                    rgb_matrix_set_flags(LED_FLAG_ALL);
                    rgb_matrix_enable_noeeprom();
                  }
                  break;
              }
            }
            return false;
        default:
            return true; //Process all other keycodes normally
    }
}

void keyboard_post_init_user() {
    rgblight_mode(RGB_MATRIX_CUSTOM_my_cool_effect);
}
