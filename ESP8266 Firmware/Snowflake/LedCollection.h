#include "Led.h"

class LedCollection
{
  private:
    int _current = 0;
  
  public:
    Led *Leds;
    int Size = 0;

    LedCollection(int size)
    {
        Leds = new Led[size];
        Size = size;
    }

    void Add(Led led)
    {
        *(Leds + _current) = led;
        _current++;
    }
};
