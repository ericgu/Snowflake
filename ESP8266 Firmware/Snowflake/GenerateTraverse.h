class GenerateTraverse: IGenerateNumber
{
  private:
    static const int LedCount = 108;
    const int _ledsInOrder[LedCount];
    int _current = 0;

  public:
    GenerateTraverse(): _ledsInOrder{   0,  1,  2,  3,  4,  3,  2,  5,  6,  5,  2,  7,  8,  7,  2,  1,  0, 27,
                                        9, 10, 11, 12, 13, 12, 11, 14, 15, 14, 11, 16, 17, 16, 11, 10,  9, 27,
                                       18, 19, 20, 21, 22, 21, 20, 23, 24, 23, 20, 25, 26, 25, 20, 19, 18, 27,
                                       28, 29, 30, 31, 32, 31, 30, 33, 34, 33, 30, 35, 36, 35, 30, 29, 28, 27,
                                       37, 38, 39, 40, 41, 40, 39, 42, 43, 42, 39, 44, 45, 44, 39, 38, 37, 27,
                                       46, 47, 48, 49, 50, 49, 48, 51, 52, 51, 48, 53, 54, 53, 48, 47, 46, 27} {}

  #ifdef fred
    GenerateTraverse(): _ledsInOrder{   0,  1,  2,  3,  4,  5,  6,  7,  8, 27,
                                        9, 10, 11, 12, 13, 14, 15, 16, 17, 27,
                                       18, 19, 20, 21, 22, 23, 24, 25, 26, 27,
                                       28, 29, 30, 31, 32, 33, 34, 35, 36, 27,
                                       37, 38, 39, 40, 41, 42, 43, 44, 45, 27,
                                       46, 47, 48, 49, 50, 51, 52, 53, 54, 27} {}
  #endif
  
  public:
    virtual LedIndexes GetNext()
    {
      int number = _ledsInOrder[_current];
      _current = (_current + 1) % LedCount;
      LedIndexes ledIndexes;
      ledIndexes.Indexes[0] = number;
      ledIndexes.Count = 1;
      return ledIndexes;
    }
    
};
