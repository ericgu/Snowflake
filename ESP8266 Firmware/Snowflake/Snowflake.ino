#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#include "LedCollection.h"
#include "IAnimate.h"
#include "SnowflakeLeds.h"
#include "Rainbow.h"
#include "AnimateDistance.h"
#include "AnimateAngular.h"
#include "AnimateSparkle.h"

#define PIN 12

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(55, PIN, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

SnowflakeLeds snowflakeLeds;
IAnimate* pAnimate1;
IAnimate* pAnimate2;
IAnimate* pAnimate3;

IAnimate* pAnimate;
int loopCount;
const int AnimationLoopCount = 25000;

volatile int toggle;

void inline handler (void){
  toggle = (toggle == 1) ? 0 : 1;
  digitalWrite(BUILTIN_LED, toggle);
  timer0_write(ESP.getCycleCount() + 41660000);
}

void setup2() {
  pinMode(BUILTIN_LED, OUTPUT);

  noInterrupts();
  timer0_isr_init();
  timer0_attachInterrupt(handler);
  timer0_write(ESP.getCycleCount() + 41660000);
  interrupts();
}

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
  #if defined (__AVR_ATtiny85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  #endif
  // End of trinket special code

  randomSeed(analogRead(0));

  Serial.begin(115200);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'

  pAnimate1 = new AnimateDistance();
  pAnimate2 = new AnimateAngular();
  pAnimate3 = new AnimateSparkle();
  loopCount = 0;
  //setup2();
}

void nextAnimation()
{
  if (loopCount == 0)
  {
    if (pAnimate == pAnimate1)
    {
      pAnimate = pAnimate2;
    }
    else if (pAnimate == pAnimate2)
    {
      pAnimate = pAnimate3;
    }
    else
    {
      pAnimate = pAnimate1;
    }

    loopCount = AnimationLoopCount;
  }
  
  loopCount--;
}

void loop() {
  nextAnimation();

  snowflakeLeds.UpdateColors(pAnimate);
  snowflakeLeds.CopyToStrip(strip);
  strip.show();
}

 





