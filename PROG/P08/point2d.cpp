#include <iostream>
#include <iomanip>
#include "Point2d.h"
#include <cmath>

using namespace std;

void Point2d::translate(const Point2d& t){
    x += t.x;
    y += t.y;
}



double Point2d::distance_to(const Point2d& p) const {
    double dx = x - p.x;
    double dy = y - p.y;
    return std::sqrt(dx * dx + dy * dy);
}

