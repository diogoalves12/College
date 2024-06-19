#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include <cmath>
#define _USE_MATH_DEFINES

class Circle : public Shape
{
    public:
        Circle(const point& center, double radius) : Shape(center), radius_(radius) { }
        double area() const override { return M_PI * radius_ * radius_;}
        double perimeter() const override { return 2 * M_PI * radius_; }
        
        bool contains(const point& p) const override {
            double dx = p.x - get_center().x;
            double dy = p.y - get_center().y;
            return dx * dx + dy * dy < radius_ * radius_;
        }
    private:
        double radius_;
};

#endif
