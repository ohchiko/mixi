#include QMK_KEYBOARD_H

// please change this value to the desired layer definitions
#define LAYERNUM 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /*
     * .------------------------------------------.
     * | Hold: Layer 1 |          | Hold: Layer 2 |
     * | Keypad 7      | Keypad 8 | Keypad 9      |
     * |---------------|----------|---------------|
     * | Keypad 4      | Keypad 5 | Keypad 6      |
     * |---------------|----------|---------------|
     * | Keypad 1      | Keypad 2 | Keypad 3      |
     * '------------------------------------------'
     */
    [0] =
        LAYOUT(
                LT(1, KC_P7), KC_P8, LT(2, KC_P9), 
                KC_P4       , KC_P5, KC_P6       , 
                KC_P1       , KC_P2, KC_P3
              ),

    /*
     * .---------------------------------------------------.
     * | Hold: Layer 1  |                  |               |
     * | Keypad 7       | Media Play/Pause | Volume Mute   |
     * |----------------|------------------|---------------|
     * | Media Previous | RGB Bright+      | Media Next    |
     * |----------------|------------------|---------------|
     * | RGB Anim-      | RGB Bright-      | RGB Anim+     |
     * '---------------------------------------------------'
     */
    [1] =
        LAYOUT(
                KC_TRNS , KC_MPLY, KC_MUTE,
                KC_MPRV , RGB_VAI, KC_MNXT,
                RGB_RMOD, RGB_VAD, RGB_MOD
              ),

    /*
     * .--------------------------------------.
     * | N/A          | N/A   | Hold: Layer 2 |
     * |--------------|-------|---------------|
     * | RESET EEPROM | RESET | DEBUG MODE    |
     * |--------------|-------|---------------|
     * | N/A          | N/A   | N/A           |
     * '--------------------------------------'
     */
    [2] =
        LAYOUT(
                KC_NO  , KC_NO, KC_TRNS, 
                EEP_RST, RESET, DEBUG  , 
                KC_NO  , KC_NO, KC_NO
              )

};

const rgblight_segment_t PROGMEM _base_layer[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, RGBLED_NUM, HSV_BLUE}
        );
const rgblight_segment_t PROGMEM _middle_layer[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, RGBLED_NUM, HSV_GREEN}
        );
const rgblight_segment_t PROGMEM _top_layer[] = RGBLIGHT_LAYER_SEGMENTS(
        {0, RGBLED_NUM, HSV_RED}
        );

const rgblight_segment_t* const PROGMEM _rgb_layers[] =
RGBLIGHT_LAYERS_LIST(
        _base_layer,
        _middle_layer,
        _top_layer
        );

void keyboard_post_init_user(void) {
    rgblight_layers = _rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {

    switch (get_highest_layer(state)) {
        case 0:
            rgblight_blink_layer(0, 500);
            break;
        case 1:
            rgblight_blink_layer(1, 500);
            break;
        case 2:
            rgblight_blink_layer(2, 500);
            break;
    }
    return state;
}
