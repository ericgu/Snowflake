class AnimateDistance : public IAnimate
{
  private:
    const int AnimationLoopCount = 10000;
    int _distance;
    Rainbow _rainbow = Rainbow(127);

  public:
    virtual int GetAnimationLoopCount()
    {
      return AnimationLoopCount;
    }
      
    virtual void UpdateColors(LedCollection* pLedCollection)
    {
        delay(1);
        
        _distance -= 1;
        if (_distance < 0)
        {
            _distance = 30000;
        }

        for (int i = 0; i < pLedCollection->Size; i++)
        {
            Led& led = pLedCollection->Leds[i];
            int distance = (led.Distance + _distance) % 600;

            _rainbow.HandleRainbow(led, distance, 100);
        }
    }
};
