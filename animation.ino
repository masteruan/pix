/* Code by Giovanni Gentile
*  25 Ottobre 2016
*  www. projectg.it
*  www.0lab.it
*/

#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#ifndef PSTR
 #define PSTR // Make Arduino Due happy
#endif
#include "Definitions.h"

#define PIN 6


Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(8, 8, PIN,
  NEO_MATRIX_BOTTOM     + NEO_MATRIX_LEFT +
  NEO_MATRIX_COLUMNS + NEO_MATRIX_PROGRESSIVE,
  NEO_GRB            + NEO_KHZ800);
  
// See Definitions.h
String COLOR = "LIME";

// http://blog.riyas.org/2013/12/online-led-matrix-font-generator-with.html
static unsigned char PROGMEM alienoa1[] =
{B01000010,
B00100100,
B01111110,
B11011011,
B11111111,
B01000010,
B01100110,
B00000000};

static unsigned char PROGMEM alienoa2[] =
{B01000010,
B00100100,
B10111101,
B11011011,
B01111110,
B01000010,
B11000011,
B00000000};

static unsigned char PROGMEM alienob1[] =
{B00011000,
B01111110,
B11111111,
B11111111,
B10011001,
B11111111,
B01100110,
B11011011};

static unsigned char PROGMEM alienob2[] =
{B00011000,
B01111110,
B11111111,
B11111111,
B10011001,
B11111111,
B01100110,
B01101101};

static unsigned char PROGMEM alienoc1[] =
{B00011000,
B00111100,
B01111110,
B11111111,
B11011011,
B01111110,
B00100100,
B01011010};

static unsigned char PROGMEM alienoc2[] =
{B00011000,
B00111100,
B01111110,
B11111111,
B11011011,
B01111110,
B01011010,
B10100101};

static unsigned char PROGMEM navicella1[] =
{B00000000,
B00000000,
B00000000,
B00000000,
B01000000,
B00000000,
B01000000,
B11100000};

static unsigned char PROGMEM navicella2[] =
{B00000000,
B00000000,
B00000000,
B01000000,
B00010000,
B00000000,
B00010000,
B00111000};

static unsigned char PROGMEM navicella3[] =
{B00000000,
B00000000,
B01000000,
B00010000,
B00000010,
B00000000,
B00000010,
B00000111};

static unsigned char PROGMEM navicella4[] =
{B00000000,
B01000000,
B00010000,
B00000010,
B00000000,
B00000000,
B00001000,
B00011100};

static unsigned char PROGMEM navicella5[] =
{B01000000,
B00010000,
B00000010,
B00000000,
B00000000,
B00000000,
B00010000,
B00111000};

void setup() {
  matrix.begin();
  matrix.setTextWrap(false);
  matrix.setBrightness(40);
}


void loop() {
 
  
  matrix.fillScreen(0);
 
 sprite(alienoa1,COLOR);
 sprite(alienoa2,COLOR);
 sprite(alienoa1,COLOR);
 sprite(alienob1,COLOR);
 sprite(alienob2,COLOR);
 sprite(alienob1,COLOR);
 sprite(alienoc1,COLOR);
 sprite(alienoc2,COLOR);
 sprite(alienoc1,COLOR);
 sprite(navicella1,COLOR);
 sprite(navicella2,COLOR);
 sprite(navicella3,COLOR);
 sprite(navicella4,COLOR); 
}

void sprite(const uint8_t* x, String& y){
 matrix.drawBitmap(0,0, x, 8, 8, y);
 matrix.show();
 delay(200);
 matrix.fillScreen(0);
}
