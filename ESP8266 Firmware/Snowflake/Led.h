#include "RgbColor.h"

class Led
{
  private:
    RgbColor StartColor;
    int Max;

  public:
    int Angle;
    int Distance;
    RgbColor Color;
    RgbColor EndColor;
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
        Color = RgbColor(0, 0, 0);
    }

    bool InBlend()
    {
      return Count > 0;
    }

    void BlendToEnd(RgbColor startColor, RgbColor endColor, int max)
    {
      StartColor = startColor;
      EndColor = endColor;
      Max = max;
      Count = max;
    }

    void UpdateBlend()
    {
        if (Count != 0)
        {
            Color = RgbColor::Blend(EndColor, StartColor, Count, Max);

            Count--;
        }
        else
        {
          Color = EndColor;
        }
    }    
};
