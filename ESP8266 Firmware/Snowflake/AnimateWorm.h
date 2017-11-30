class AnimateWorm : public IAnimate
{
  private:
    const int AnimationLoopCount = 900;
    Rainbow _rainbow = Rainbow(64);
    Sparklers _sparklers = Sparklers(9995);
    ColorGenerator _colorGenerator = ColorGenerator(100);
    GenerateBounce _traverser1 = GenerateBounce(0);
    GenerateBounce _traverser2 = GenerateBounce(2);
    GenerateBounce _traverser3 = GenerateBounce(4);

    int _loopCount = 0;

  public:
    virtual int GetAnimationLoopCount()
    {
      return AnimationLoopCount;
    }
      
    void UpdateColors(LedCollection* pLedCollection)
    {
        delay(35);

        for (int i = 0; i < pLedCollection->Size; i++)
        {
            Led& led = pLedCollection->Leds[i];
            led.UpdateBlend();
        }
 
        RgbColor ledColor = _colorGenerator.GetNextColor();

        UpdateFromTraverser(pLedCollection, _traverser1, ledColor);
        UpdateFromTraverser(pLedCollection, _traverser2, ledColor);
        UpdateFromTraverser(pLedCollection, _traverser3, ledColor);
    }

    void UpdateFromTraverser(LedCollection* pLedCollection, GenerateBounce& traverser, RgbColor ledColor)
    {
        LedIndexes ledIndexes = traverser.GetNext();

        for (int i = 0; i < ledIndexes.Count; i++)
        {
          Led& led = pLedCollection->Leds[ledIndexes.Indexes[i]];
          led.BlendToEnd(ledColor, RgbColor(0, 0, 0), 5);
        }  
    }
};
