
#ifndef FOBE_QUILL_ESP32S3_MESH_H_
#define FOBE_QUILL_ESP32S3_MESH_H_

//--------------------------------------------------------------------+
// Button
//--------------------------------------------------------------------+

// Enter UF2 mode if GPIO is pressed while 2nd stage bootloader indicator
// is on e.g RGB = Purple. If it is GPIO0, user should not hold this while
// reset since that will instead run the 1st stage ROM bootloader
#define PIN_BUTTON_UF2        0

// GPIO that implement 1-bit memory with RC components which hold the
// pin value long enough for double reset detection.
#define PIN_DOUBLE_RESET_RC   34

//--------------------------------------------------------------------+
// LED
//--------------------------------------------------------------------+

// LED for indicator and writing flash
// If not defined neopixel will be use for flash writing instead
#define LED_PIN               11
#define LED_STATE_ON          0

//--------------------------------------------------------------------+
// USB UF2
//--------------------------------------------------------------------+

#define USB_VID                  0x303A
#define USB_PID                  0x82F6
#define USB_MANUFACTURER         "FoBE Studio"
#define USB_PRODUCT              "FoBE Quill ESP32S3 Mesh"

#define UF2_PRODUCT_NAME         USB_MANUFACTURER " " USB_PRODUCT
#define UF2_VOLUME_LABEL         "FoBE Boot"
#define UF2_BOARD_ID             "f1102_r1a"
#define UF2_INDEX_URL            "https://docs.fobestudio.com/product/f1102"

#endif
