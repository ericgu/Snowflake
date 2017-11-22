class Rainbow
{
  private:
    RgbColor _red;
    RgbColor _yellow;
    RgbColor _green;
    RgbColor _cyan;
    RgbColor _blue;
    RgbColor _purple;

  public:
    Rainbow(byte intensity)
    {
        _red =  RgbColor(intensity, 0, 0);
        _yellow =  RgbColor(intensity, intensity, 0);
        _green =  RgbColor(0, intensity, 0);
        _cyan =  RgbColor(0, intensity, intensity);
        _blue =  RgbColor(0, 0, intensity);
        _purple =  RgbColor(intensity, 0, intensity);
    }

    void SetRainbowColor(Led& led, int color, int percentAmount, int percentSize)
    {
        switch (color)
        {
            case 0:
                led.Color = RgbColor::Blend(_red, _yellow, percentAmount, percentSize);
                break;

            case 1:
                led.Color = RgbColor::Blend(_yellow, _green, percentAmount, percentSize);
                break;

            case 2:
                led.Color = RgbColor::Blend(_green, _cyan, percentAmount, percentSize);
                break;

            case 3:
                led.Color = RgbColor::Blend(_cyan, _blue, percentAmount, percentSize);
                break;

            case 4:
                led.Color = RgbColor::Blend(_blue, _purple, percentAmount, percentSize);
                break;

            case 5:
                led.Color = RgbColor::Blend(_purple, _red, percentAmount, percentSize);
                break;
        }
    }

    void HandleRainbow(Led& led, int distance, int size)
    {
        int color = distance / size;
        int percentAmount = distance - color * size;
        int percentSize = size;

        SetRainbowColor(led, color, percentAmount, percentSize);
    }
};
