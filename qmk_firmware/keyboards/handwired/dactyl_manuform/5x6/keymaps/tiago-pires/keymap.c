/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _DESIGN 3

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define DESIGN MO(_DESIGN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  
  [_QWERTY] = LAYOUT_5x6(
     KC_ESC , KC_1  , KC_2  , KC_3, KC_4  , KC_5  ,                                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_EQL,
     KC_GRV ,KC_QUOT,KC_COMM, KC_DOT, KC_P  , KC_Y  ,                                   KC_F  , KC_G  , KC_C  , KC_R  , KC_L  ,KC_EQL,
     MT(MOD_LCTL,KC_MINUS),KC_A ,LT(RAISE,KC_O) ,KC_E, KC_U, KC_I,     KC_D , KC_H  , KC_T  , KC_N , KC_S , MT(MOD_RCTL,KC_SLASH), 
     MT(MOD_LALT,KC_TAB),LT(RAISE,KC_SCLN), KC_Q  , KC_J  , KC_K  , KC_X  ,                    KC_B  , KC_M  , KC_W  , KC_V ,  KC_Z  , MT(MOD_RALT,KC_BSLASH),
            KC_LBRC, KC_RBRC,                                                                      KC_LPRN,KC_RPRN,
           LT(LOWER,KC_TAB), MT(MOD_LSFT, KC_ESC),                                         MT(MOD_RSFT, KC_SPC), LT(RAISE,KC_ENT),
              MT(MOD_LSFT, KC_BSPC), MT(MOD_LGUI, KC_DEL),              LT(RAISE, KC_BSPC), LGUI(KC_TAB), 
               KC_SPC, LT(LOWER,KC_ENT),                                RALT(KC_BSPC), MT(MOD_RGUI,_______)
  ),
  
  [_LOWER] = LAYOUT_5x6(
     _______ , _______  , KC_LBRC  , KC_RBRC  , _______  , _______  ,      _______,_______,KC_LBRC,KC_RBRC,_______,_______,
     KC_0, KC_EXLM,KC_AT,KC_HASH,KC_DLR,KC_PERC,                      RCTL(KC_U) , KC_7 , KC_8, KC_9,_______,_______,
     KC_TILD , LCMD(KC_C), LCMD(KC_C) , LCMD(KC_V) , KC_4 , KC_5 ,    KC_BSPC, KC_4 , KC_5, KC_6 ,KC_GRV, KC_EXLM,
     _______  , _______ , KC_LCBR , KC_RCBR , _______ , _______ ,     RCTL(KC_W), KC_1 ,KC_2, KC_3 ,_______ ,_______,
                        _______ , KC_0,                                          KC_0, _______,
                           _______ , MT(MOD_LGUI,_______ ),                 RCTL(KC_D),RCTL(KC_ENT),
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,RESET 

  ),

  [_RAISE] = LAYOUT_5x6(
    RESET , _______ , KC_VOLD, KC_VOLU , _______ , _______ ,             LCTL(KC_6)  , _______ , _______ , _______ ,_______ ,_______ ,
       KC_0,KC_EXLM,KC_AT,KC_HASH,KC_DLR,KC_PERC,                        RCMD(KC_LEFT),RALT(KC_LEFT),KC_UP,RALT(KC_RIGHT),_______, _______,
       KC_TILD,KC_ASTR,KC_LPRN,KC_RPRN,KC_LBRC,KC_RBRC,                   KC_BSPC,KC_LEFT,KC_DOWN,KC_RIGHT,RCMD(KC_RIGHT),_______,
        _______,_______,KC_LCBR,KC_RCBR,KC_AMPR,KC_PIPE,                        _______,_______,_______,_______,_______,_______,
                                      _______ , _______,            _______,_______,
                                               LCTL(KC_S),_______,            KC_0,LCTL(KC_ENT),
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,RESET
  ),
  [_DESIGN] = LAYOUT_5x6(
    _______ , _______ , KC_VOLD, KC_VOLU , _______ , _______ ,             LCTL(KC_6)  , _______ , _______ , _______ ,_______ ,_______ ,
       _______,_______,KC_7,KC_8,KC_9,LCMD(KC_C),                             RCMD(KC_RIGHT),RALT(KC_LEFT),KC_UP,RALT(KC_RIGHT),KC_RIGHT, KC_BSPC,
       _______,_______,KC_4,KC_5,KC_6,LCMD(KC_V),                             KC_BSPC,KC_LEFT,KC_DOWN,KC_RIGHT,KC_DEL,_______,
        _______,_______,KC_1,KC_2,KC_3,LCMD(KC_X),                         LCMD(KC_LEFT),RCTL(KC_6),RALT(KC_BSPC),_______,_______,_______,
                                _______ ,KC_0 ,                      _______,_______,
                                               _______,_______,            LCTL(KC_D),LCTL(KC_U),
                                               _______,LSFT(_______),            _______,_______,
                                               _______,_______,            _______,RESET
  ),
};
