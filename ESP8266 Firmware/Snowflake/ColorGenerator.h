class ColorGenerator
{
  private:
    int _slowness;
    int _value = 0;
    Rainbow _rainbow = Rainbow(127);

  public:
    ColorGenerator(int slowness)
    {
      _slowness = slowness;
    }
    
    RgbColor GetNextColor()
    {
        _value += 1;

        int value = _value % (6 * _slowness);

        int color = value / _slowness;
        int percentAmount = value - color * _slowness;
        int percentSize = _slowness;

        return _rainbow.GetRainbowColor(color, percentAmount, percentSize);
    }
};
