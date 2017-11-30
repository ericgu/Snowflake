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

    RgbColor GetRainbowColor(int color, int percentAmount, int percentSize)
    {
        switch (color)
        {
            case 0:
                return RgbColor::Blend(_red, _yellow, percentAmount, percentSize);

            case 1:
                return RgbColor::Blend(_yellow, _green, percentAmount, percentSize);

            case 2:
                return RgbColor::Blend(_green, _cyan, percentAmount, percentSize);

            case 3:
                return RgbColor::Blend(_cyan, _blue, percentAmount, percentSize);

            case 4:
                return RgbColor::Blend(_blue, _purple, percentAmount, percentSize);

            case 5:
                return RgbColor::Blend(_purple, _red, percentAmount, percentSize);

            default:
                Serial.print("GetRainbowColor ");
                Serial.println(color);
        }
    }
    
    void SetRainbowColor(Led& led, int color, int percentAmount, int percentSize)
    {
        led.Color = GetRainbowColor(color, percentAmount, percentSize);
    }

    void HandleRainbow(Led& led, int distance, int size)
    {
        int color = distance / size;
        int percentAmount = distance - color * size;
        int percentSize = size;

        SetRainbowColor(led, color, percentAmount, percentSize);
    }
};
