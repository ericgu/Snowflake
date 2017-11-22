#include "RgbColor.h"

class Led
{
  public:
    int Angle;
    int Distance;
    RgbColor Color;
    int Count;

    Led()
    {
      Count = 0;
    }

    Led(int angle, int distance)
    {
        Angle = angle;
        Distance = distance;
        Count = 0;
    }
};
