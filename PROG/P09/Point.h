#ifndef _POINT_H_
#define _POINT_H_

class Point
{
public:
    Point();
    Point(int x, int y);
    int get_x() const;
    int get_y() const;
    void show() const;
private:
    int x_, y_;
};

#endif