class AnimateAngular : public IAnimate
{
  private:
    int _rotation;
    Rainbow _rainbow = Rainbow(127);

  public:
    virtual void UpdateColors(LedCollection* pLedCollection)
    {
        _rotation += 1;

        for (int i = 0; i < pLedCollection->Size; i++)
        {
            Led& led = pLedCollection->Leds[i];

            int angle = (led.Angle + _rotation) % 360;

            if (led.Distance != 0)
            {
                _rainbow.HandleRainbow(led, angle, 60);
            }
        }        
    }
};
