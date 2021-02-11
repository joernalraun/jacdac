// Autogenerated C header file for LED Matrix
#ifndef _JACDAC_SPEC_LED_MATRIX_H
#define _JACDAC_SPEC_LED_MATRIX_H 1

#define JD_SERVICE_CLASS_LED_MATRIX  0x110d154b

/**
 * Read-write bytes. The state of the screen where pixel on/off state is 
 * stored as a bit, column by column. The column should be byte aligned.
 */
#define JD_LED_MATRIX_REG_LEDS JD_REG_VALUE

/**
 * Read-write ratio u0.8 (uint8_t). Reads the general brightness of the LEDs. ``0`` when the screen is off.
 */
#define JD_LED_MATRIX_REG_BRIGHTNESS JD_REG_INTENSITY

/**
 * Constant # uint16_t. Number of rows on the screen
 */
#define JD_LED_MATRIX_REG_ROWS 0x181

/**
 * Constant # uint16_t. Number of columns on the screen
 */
#define JD_LED_MATRIX_REG_COLUMNS 0x182

#endif
