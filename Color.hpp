#pragma once

//----------------
#include <istream>
//----------------

class Color {
  public:
    Color();
    Color(double red, double green, double blue);
    double red() const;
    double green() const;
    double blue() const;

  void setColor(double red, double green, double blue);

  private:
    double r{};
    double g{};
    double b{};
};
//---------------------------------------------------------------
inline std::istream& operator>>(std::istream& stream, Color& color){
    double red;
    double green;
    double blue;
    stream >> red >> green >> blue;
    color.setColor(red, green, blue);
    return stream;
}
//---------------------------------------------------------------
