RGB_MATRIX_EFFECT(my_cool_effect)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
extern const uint32_t PROGMEM colmap[][MATRIX_ROWS][MATRIX_COLS];
extern led_config_t g_led_config;

static bool my_cool_effect(effect_params_t* params) {
	RGB_MATRIX_USE_LIMITS(led_min, led_max)
	return led_max < DRIVER_LED_TOTAL;
}

#endif
