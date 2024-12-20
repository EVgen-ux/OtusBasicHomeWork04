#include "Color.hpp"

Color::Color() = default;

Color::Color(double red, double green, double blue)
    : r{red}, g{green}, b{blue} {}

double Color::red() const {
    return r;
}

double Color::green() const {
    return g;
}

double Color::blue() const {
    return b;
}

//------------------------------------------------------------
void Color::setColor(double red, double green, double blue) {
    this->r = red;
    this->g = green;
    this->b = blue;
}
//------------------------------------------------------------