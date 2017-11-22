#include "sparklers.h"

class AnimateSparkle : public IAnimate
{
  private:
    const int Slowness = 1000;
    int _distance;
    Rainbow _rainbow = Rainbow(64);
    Sparklers _sparklers = Sparklers(9990);

  public:
    void UpdateColors(LedCollection* pLedCollection)
    {
        _distance += 1;

        for (int i = 0; i < pLedCollection->Size; i++)
        {
            Led& led = pLedCollection->Leds[i];

            int distance = _distance % (6 * Slowness);

            _rainbow.HandleRainbow(led, distance, Slowness);

            _sparklers.UpdateSparkle(led);
            _sparklers.CreateRandom(led);
        }
    }
};
