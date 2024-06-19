#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape
{
    public:
        Rectangle(const point& center, double width, double height) : Shape(center), width_(width), height_(height) { }
        double area() const override { return width_ * height_; }
        double perimeter() const override { return (2 * width_) + (2 * height_); }
        
        bool contains(const point& p) const override 
        {
            double halfWidth = width_ / 2.0;
            double halfHeight = height_ / 2.0;
            double minX = get_center().x - halfWidth;
            double maxX = get_center().x + halfWidth;
            double minY = get_center().y - halfHeight;
            double maxY = get_center().y + halfHeight;

            if(p.x <= maxX && p.x >= minX && p.y >= minY && p.y <= maxY)
            {
                return true;
            } else { 
                return false;
            }
        }
    
    private:
        double width_;
        double height_;
};
#endif
