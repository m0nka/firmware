//#define HAS_GPS 0
//#undef GPS_RX_PIN
//#undef GPS_TX_PIN

#define HAS_GPS 1

#undef GPS_RX_PIN
#undef GPS_TX_PIN
#define GPS_RX_PIN 46
#define GPS_TX_PIN 13

// #define HAS_SCREEN 0

// #define HAS_SDCARD
// #define SDCARD_USE_SPI1

#define USE_SSD1306
#define I2C_SDA 8
#define I2C_SCL 9

#define LED_PIN 10
#define LED_STATE_ON 1 // State when LED is litted

// #define BUTTON_PIN 15 // Pico OLED 1.3 User key 0 - removed User key 1 (17)

#define BUTTON_PIN 0
// #define BUTTON_PIN 0 // This is the BOOT button pad at the moment
// #define BUTTON_NEED_PULLUP

// #define USE_RF95   // RFM95/SX127x

#undef LORA_SCK
#undef LORA_MISO
#undef LORA_MOSI
#undef LORA_CS

// WaveShare Core1262-868M OK
// https://www.waveshare.com/wiki/Core1262-868M
#define USE_SX1262

//#ifdef USE_SX1262
//#define LORA_MISO 39
//#define LORA_SCK 21
//#define LORA_MOSI 38
//#define LORA_CS 17

//#define LORA_RESET 42
//#define LORA_DIO1 5
//#define LORA_BUSY 47

#ifdef USE_SX1262
#define LORA_MISO 17
#define LORA_SCK 18
#define LORA_MOSI 16
#define LORA_CS 15

#define LORA_RESET 4
#define LORA_DIO1 6
#define LORA_BUSY 3

#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1 // DIO1/IRQ
#define SX126X_BUSY LORA_BUSY
#define SX126X_RESET LORA_RESET
//#define SX126X_DIO2_AS_RF_SWITCH
//#define SX126X_DIO3_TCXO_VOLTAGE 1.8

//#define LORA_RXEN 7 // Input - RF switch RX control, connecting external MCU IO, valid in high level
//#define LORA_TXEN 6 // Input - RF switch TX control, connecting external MCU IO or DIO2, valid in high level


//#define SX126X_RXEN LORA_RXEN
//#define SX126X_TXEN LORA_TXEN




#endif

// #define USE_SX1280
#ifdef USE_SX1280
#define LORA_MISO 1
#define LORA_SCK 3
#define LORA_MOSI 4
#define LORA_CS 2
#define LORA_RESET 17
#define LORA_DIO1 12
#define LORA_BUSY 47
#define SX128X_CS LORA_CS
#define SX128X_DIO1 LORA_DIO1
#define SX128X_BUSY LORA_BUSY
#define SX128X_RESET LORA_RESET
#endif

// #define USE_EINK
/*
 * eink display pins
 */
// #define PIN_EINK_CS
// #define PIN_EINK_BUSY
// #define PIN_EINK_DC
// #define PIN_EINK_RES    (-1)
// #define PIN_EINK_SCLK   3
// #define PIN_EINK_MOSI   4
