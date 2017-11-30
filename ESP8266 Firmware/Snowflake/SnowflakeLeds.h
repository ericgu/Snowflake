class SnowflakeLeds
{
  private:
    LedCollection* _pLedCollection;

    void CreateArm(int angle)
    {
        AddLed(angle, 20);
        AddLed(angle, 40);
        AddLed(angle, 60);
        AddLed(angle - 13, 74);
        AddLed(angle - 22, 89);
        AddLed(angle, 80);
        AddLed(angle, 100);
        AddLed(angle + 13, 74);
        AddLed(angle + 22, 89);
    }

    void AddLed(int angle, int distance)
    {
        Led led = Led(angle, distance);
        _pLedCollection->Add(led);
    }

  public:
    SnowflakeLeds()
    {
        _pLedCollection = new LedCollection(55);

        CreateArm(0);
        CreateArm(60);
        CreateArm(120);

        Led led = Led(0, 0);
        led.EndColor = RgbColor(0, 0, 0);
        _pLedCollection->Add(led);

        CreateArm(180);
        CreateArm(240);
        CreateArm(300);
    }

    void UpdateColors(IAnimate* animation)
    {
        animation->UpdateColors(_pLedCollection);
    }

    void CopyToStrip(Adafruit_NeoPixel& strip)
    {
      for(uint16_t i=0; i<strip.numPixels(); i++) 
      {
        Led led = _pLedCollection->Leds[i];
        strip.setPixelColor(i, strip.Color(led.Color.Red, led.Color.Green, led.Color.Blue));

#ifdef f
        Serial.print(i); Serial.print(" ");
        Serial.print(led.Color.Red); Serial.print(" ");
        Serial.print(led.Color.Green); Serial.print(" ");
        Serial.print(led.Color.Blue); Serial.print(" ");
        Serial.println();
#endif
      }
    }
    
    

};
