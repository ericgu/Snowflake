class Sparklers
{
  private:
    int _threshold;
    const int SparklerMax = 250;
    const int SparklerMin = 50;
    RgbColor _white;
    
  public:
    Sparklers(int threshold)
    {
        _threshold = threshold;
        _white = RgbColor(127, 127, 127);
    }

    void CreateRandom(Led& led)
    {
        int number = random(10000);
        if (!led.InBlend() && number > _threshold)
        {
          led.BlendToEnd(_white, _white, SparklerMin); // end point will be replaced with the current color, so we just pass white...
        }
    }
};
