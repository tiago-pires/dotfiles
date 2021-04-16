/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  
  [_QWERTY] = LAYOUT_5x6(
     KC_BSPC , KC_1  , KC_2  , KC_3, KC_4  , KC_5  ,                                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_EQL,
     KC_GRV ,KC_QUOT,KC_COMM, MT(MOD_LGUI,KC_DOT), KC_P  , KC_Y  ,                                   KC_F  , KC_G  , KC_C  , KC_R  , KC_L  ,KC_EQL,
     MT(MOD_LCTL,KC_MINUS),KC_A ,KC_O ,KC_E, KC_U, KC_I,     KC_D  , KC_H  , LT(RAISE,KC_T)  , KC_N , KC_S , MT(MOD_RCTL,KC_SLASH), 
     MT(MOD_RALT,KC_TAB),KC_SCLN, KC_Q  , KC_J  , KC_K  , KC_X  ,                    KC_B  , KC_M  , KC_W  , KC_V ,  KC_Z  , MT(MOD_RALT,KC_BSLASH),
              LSFT(KC_9), LSFT(KC_0),                                                               KC_LBRC, KC_RBRC,
             LT(LOWER,KC_TAB), MT(MOD_LSFT, KC_ESC),                          MT(MOD_RSFT, KC_SPC), LT(LOWER,KC_ENT),
                 LT(RAISE,KC_BSPC), MT(MOD_LGUI, KC_EQL),              MT(MOD_RGUI, KC_EXLM), LT(RAISE, KC_ENT), 
                    KC_SPC, SGUI_T(KC_ENT),                                           MT(MOD_RALT, KC_ENT), MT(MOD_LSFT, KC_ESC)
  ),

  [_LOWER] = LAYOUT_5x6(
     RESET , _______  , KC_VOLD  , KC_VOLU  , _______  , _______  ,                        _______,_______,_______,_______,_______,_______,
     _______, LCMD(LSFT(KC_C))  ,  KC_7 , KC_8 , KC_9, LCTL(KC_U) ,                              LCMD(KC_LEFT) , RALT(KC_LEFT) , KC_UP, RALT(KC_RIGHT), LCMD(KC_RIGHT),KC_PLUS,
     LCMD(KC_C) , LCMD(KC_V), KC_4 , KC_5 , KC_6 , LCTL(KC_D) ,               KC_BSPC, KC_LEFT , KC_DOWN, KC_RIGHT ,KC_DEL,KC_PIPE,
     KC_SPC  , KC_F7 , KC_1 , KC_2 , KC_3 , LCMD(KC_X) ,                            RALT(KC_LEFT), KC_P1 , RCTL(KC_W) , KC_P3 ,KC_EQL ,KC_UNDS,
                              LCTL(KC_Q) , KC_0,                       _______, RCMD(KC_SPC),
                                             LCTL(KC_Q),_______,            _______,RCTL(KC_ENT),
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,RESET 

  ),

  [_RAISE] = LAYOUT_5x6(
       RESET , KC_F1 , KC_7, KC_8 , KC_9 , KC_PERC ,                        LCTL(KC_6)  , KC_F7 , KC_VOLD , KC_VOLU ,KC_F10 ,KC_F11 ,
       KC_0,KC_1,KC_2,KC_3,KC_4,KC_5,                                LCTL(KC_6),RALT(KC_LEFT),KC_UP,RALT(KC_RIGHT),KC_RIGHT,KC_MUTE,
    _______,LCMD(KC_RIGHT),RALT(KC_RIGHT),RALT(KC_RIGHT),KC_3,LCMD(KC_LEFT),                        KC_BSPC,KC_LEFT,KC_DOWN,KC_RIGHT,KC_DEL,RALT(KC_DEL),
        _______,_______,LCTL(KC_Q),KC_DOWN,KC_UP,_______,                        RCMD(KC_LEFT),RCMD(KC_LEFT),RALT(KC_BSPC),_______,_______,KC_VOLD,
                             LCTL(KC_D) , LCTL(KC_U),            _______,_______,
                                               _______,KC_0,            KC_ESC,RCTL(KC_ENT),
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,RESET
  ),
};
