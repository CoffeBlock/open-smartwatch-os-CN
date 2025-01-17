#pragma once

// NOTE This file will slowly be migrated into the platform header files.

// pin mapping
#if defined(GPS_EDITION) || defined(GPS_EDITION_ROTATED)
#define TFT_CS 5
#define TFT_DC 12
#define TFT_RST 2
#define TFT_SCK 18
#define TFT_MOSI 23
#define TFT_MISO -1  // no data coming back
#define TFT_LED 9
#else
#define TFT_CS 5
#define TFT_DC 12
#define TFT_RST 33
#define TFT_SCK 18
#define TFT_MOSI 23
#define TFT_MISO -1  // no data coming back
#define TFT_LED 9
#endif

#define SD_CS 4
// SD_MISO 19
// for SCK, MOSI see TFT

#define GPS_RX 14
#define GPS_TX 27
#define GPS_FON 26
#define GPS_3D_FIX 36
#define GPS_GEO_FENCE 39
#define RX1 27
#define TX1 14

#if defined(GPS_EDITION)
#define BTN_1 0
#define BTN_2 33
#define BTN_3 13
#define VIBRATE 35
#elif defined(GPS_EDITION_ROTATED)
#define BTN_1 13
#define BTN_2 0
#define BTN_3 33
#define VIBRATE 35
#else
#define BTN_1 0
#define BTN_2 10
#define BTN_3 13
#endif

// assign active LOW or HIGH states according to hardware
#if defined(GPS_EDITION_ROTATED)
#define BTN_STATE_ARRAY {HIGH, HIGH, LOW}
#else
#define BTN_STATE_ARRAY {LOW, HIGH, HIGH}
#endif