#include "Solid.h"
#include <cmath>

class Cylinder : public Solid 
{
    public:
        Cylinder(const point& c, double radius, double height) : Solid(c), radius_(radius), height_(height) {}
        double radius() const { return radius_; }
        double height() const { return height_; }
        double area() const { return  2 * M_PI *radius_ * ( radius_ + height_); }

    private:
        double radius_;
        double height_;
};

 