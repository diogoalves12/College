#include "Polygon.h"
#include <cmath>
#include <vector>
#include <iostream>

double distance(const Point& a, const Point& b){
    double s1 = (a.get_x() - b.get_x()) * (a.get_x() - b.get_x());
    double s2 = (a.get_y() - b.get_y()) * (a.get_y() - b.get_y());
    return sqrt(s1 + s2);
}

Polygon::Polygon() { }
Polygon::Polygon(std::vector<Point> v) : points_(v) { }
bool Polygon::get_vertex(unsigned long i,Point& p) const{
    if( i > points_.size() || i < 1) return false;
    p = points_[i - 1];
    return true;
}

double Polygon::perimeter() const {
    double total = 0;
    for(size_t i = 0; i < points_.size() - 1; i++){
        total += distance(points_[i],points_[i + 1]);
    }
    total += distance(points_[0], points_[points_.size() - 1]);
    return total;
}
void Polygon::show() const{
    std::cout << "{";
    for (Point p : points_) p.show();
    std::cout << "}";
}
void Polygon::add_vertex(unsigned long i, const Point &p){
    points_.insert(points_.begin() + i - 1,p);
}