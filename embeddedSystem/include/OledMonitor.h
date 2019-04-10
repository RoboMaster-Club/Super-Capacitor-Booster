#ifndef OLED_MONITOR_H
#define OLED_MONITOR_H

#include <Arduino.h>
#include <Adafruit_SSD1306>

// Logo
#define LOGO_HEIGHT   32
#define LOGO_WIDTH    32
static const unsigned char PROGMEM logo_bmp[] =
{ 
  B11111111, B11111111, B11111111, B11111111
  B10000000, B00000000, B00000000, B00000001
  B10000000, B00000000, B00000000, B00000000
  B00011000, B00000000, B00000000, B00001100
  B10011000, B00000000, B00000000, B00001100
  B00000000, B00000000, B00000000, B00000001
  B10000000, B00000000, B00000000, B00000000
  B00000000, B00000000, B00000000, B00000000
  B10000000, B00000000, B00000000, B00000001
  B00000000, B00000000, B00000000, B00000000
  B10000001, B11111111, B11111111, B00000001
  B01000011, B11111111, B11111111, B11000000
  B00100001, B11111111, B11111111, B11000010
  B10000000, B00000000, B00000000, B11100001
  B01000000, B00000000, B00000000, B11000000
  B01000001, B11111111, B11111111, B11000010
  B00100011, B11111111, B11111111, B10000001
  B10000011, B10000000, B00000000, B00000000
  B01000011, B10000000, B00000000, B00000010
  B01000011, B10010001, B10011001, B10000001
  B00100011, B10111001, B10011001, B10000000
  B10000000, B00000000, B00000000, B00000010
  B01000000, B00000000, B00000000, B00000000
  B00010010, B10101010, B00101001, B01001001
  B10100101, B01011101, B00110010, B10100100
  B00000000, B00000000, B00000000, B00000000
  B10000000, B00000000, B00000000, B00000001
  B00010000, B00000000, B00000000, B00001000
  B10011000, B00000000, B00000000, B00001100
  B00011000, B00000000, B00000000, B00001001
  B10000000, B00000000, B00000000, B00000001
  B11010010, B01001001, B00100100, B10010011
};

// Provide wrapper interface to display text message and 
// automatically scroll to left
// Extend Print class to function as a general output

class OledMonitor : public Print
{
private:
    Adafruit_SSD1306 oled;
    uint16_t height;
    uint16_t width;
    uint8_t addr;
public:
    OledMonitor(Adafruit_SSD1306 oled, uint8_t addr);
    void init(void);
    void print(String text, uint8_t size);
    Adafruit_SSD1306 getOled(void);
};

#endif