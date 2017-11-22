struct RgbColor
{
    byte Red;
    byte Green;
    byte Blue;

    RgbColor() {}

    RgbColor(byte red, byte green, byte blue)
    {
        Red = red;
        Green = green;
        Blue = blue;
    }

    static RgbColor Blend(RgbColor color1, RgbColor color2, int fraction, int denominator)
    {
        byte red = (byte) ((color2.Red - color1.Red) * fraction / denominator + color1.Red);
        byte green = (byte) ((color2.Green - color1.Green) * fraction / denominator + color1.Green);
        byte blue = (byte) ((color2.Blue - color1.Blue) * fraction / denominator + color1.Blue);

        return RgbColor(red, green, blue);
    }
};

