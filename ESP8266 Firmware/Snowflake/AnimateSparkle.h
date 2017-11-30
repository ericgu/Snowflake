#include "sparklers.h"

class AnimateSparkle : public IAnimate
{
  private:
    const int AnimationLoopCount = 14000;
    const int Slowness = 1000;
    int _distance;
    Rainbow _rainbow = Rainbow(64);
    Sparklers _sparklers = Sparklers(9995);

    int _loopCount = 0;

  public:
    virtual int GetAnimationLoopCount()
    {
      return AnimationLoopCount;
    }
      
    void UpdateColors(LedCollection* pLedCollection)
    {
        _distance += 1;

        for (int i = 0; i < pLedCollection->Size; i++)
        {
            Led& led = pLedCollection->Leds[i];

            int distance = _distance % (6 * Slowness);

            _rainbow.HandleRainbow(led, distance, Slowness);
            led.EndColor = led.Color;

            led.UpdateBlend();
            _sparklers.CreateRandom(led);
        }
    }
};
