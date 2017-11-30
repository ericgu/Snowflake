class GenerateBounce: IGenerateNumber
{
  private:
    static const int LedCount = 10;
    const int _leds[LedCount][3];
    const int _armOffset[6];
    int _current = 0;
    int _arm = 0;

  public:
    GenerateBounce(int arm): _leds {
      {27, -1, -1},
      {0, -1, -1},
      {1, -1, -1},
      {2, -1, -1},
      {3,  5,  7},
      {4,  6,  8},
      {3,  5,  7},
      {2, -1, -1},
      {1, -1, -1},
      {0, -1, -1}},
      _armOffset {0, 9, 18, 28, 37, 46 }
      {
        _arm = arm;
      }
  
    virtual LedIndexes GetNext()
    {
      if (_current == LedCount)
      {
        _current = 0;

        _arm = (_arm + 1) % 6;
      }

      LedIndexes ledIndexes;
      
      for (int i = 0; i < 3; i++)
      {
        int index = _leds[_current][i];
        
        if (index != -1)
        {
          if (_current != 0)  // center never moves...
          {
            index += _armOffset[_arm];
          }

          ledIndexes.Indexes[i] = index;
          ledIndexes.Count = i + 1;
        }
      }

      _current++;
      
      return ledIndexes;
    }
    
};
