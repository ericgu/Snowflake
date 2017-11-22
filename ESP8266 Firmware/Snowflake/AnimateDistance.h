class AnimateDistance : public IAnimate
{
  private:
    int _distance;
    Rainbow _rainbow = Rainbow(127);

  public:
    virtual void UpdateColors(LedCollection* pLedCollection)
    {
        _distance -= 1;
        if (_distance < 0)
        {
            _distance = 32767;
        }

        for (int i = 0; i < pLedCollection->Size; i++)
        {
            Led& led = pLedCollection->Leds[i];
            int distance = (led.Distance + _distance) % 600;

            _rainbow.HandleRainbow(led, distance, 100);
        }
    }
};
