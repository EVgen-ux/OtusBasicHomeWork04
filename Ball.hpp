#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

class Ball {
public:
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;

//--------------------------------------------------------------
Ball() = default;

Ball (Point center, Velocity velocity, Color color, double radius, double isCollidable)
{
    n_center = center;
    n_velocity = velocity;
    n_color = color;
    n_radius = radius;
    n_isCollidable = isCollidable;
};

~Ball() = default;


private:
    double n_radius;
    double n_mass;
    Point n_center;
    Velocity n_velocity;
    Color n_color;
    bool n_isCollidable;
//----------------------------------------------------
};
