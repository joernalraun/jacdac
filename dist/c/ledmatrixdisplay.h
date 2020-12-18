// Autogenerated C header file for LED Matrix Display
#ifndef _JACDAC_SPEC_LED_MATRIX_DISPLAY_H
#define _JACDAC_SPEC_LED_MATRIX_DISPLAY_H 1

#define JD_SERVICE_CLASS_LED_MATRIX_DISPLAY  0x110d154b

/**
 * Read-only bytes. Streams the state of the screen where pixel on/off state is 
 * stored as a bit, column by column. The column should be byte aligned.
 */
#define JD_LED_MATRIX_DISPLAY_REG_LEDS JD_REG_READING

#endif