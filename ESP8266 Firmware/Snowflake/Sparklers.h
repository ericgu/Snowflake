class Sparklers
{
  private:
    int _threshold;
    const int SparklerMax = 50;
    RgbColor _white;
    
  public:
    Sparklers(int threshold)
    {
        _threshold = threshold;
        _white = RgbColor(127, 127, 127);
    }

    void UpdateSparkle(Led& led)
    {
        if (led.Count != 0)
        {
            led.Color = RgbColor::Blend(led.Color, _white, led.Count, SparklerMax);

            led.Count--;
        }
    }

    void CreateRandom(Led& led)
    {
        int number = random(10000);
        if (led.Count == 0 && number > _threshold)
        {
            led.Count = SparklerMax;
        }
    }
};
