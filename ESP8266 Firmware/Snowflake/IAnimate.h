    class IAnimate
    {
      public:
        virtual void UpdateColors(LedCollection* pLedCollection) = 0;
        virtual int GetAnimationLoopCount() = 0;
    };
