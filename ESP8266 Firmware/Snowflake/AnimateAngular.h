class AnimateAngular : public IAnimate
{
  private:
    const int AnimationLoopCount = 10000;
  
    int _rotation;
    Rainbow _rainbow = Rainbow(127);

  public:
    virtual int GetAnimationLoopCount()
    {
      return AnimationLoopCount;
    }
    
    virtual void UpdateColors(LedCollection* pLedCollection)
    {
        delay(1);
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
