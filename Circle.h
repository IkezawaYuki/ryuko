
#ifndef RYUKO_CIRCLE_H
#define RYUKO_CIRCLE_H
#include "Point2d.h"

class Circle {
    Point2d center;
    int radius;
public:
    Circle(const Point2d& c, int r) : center(c), radius(r) {}
    int get_radius() const { return radius; }
    void print() const{
        std::cout << "半径[" << radius << "] 中心座標";
        center.print();
    }
};

#endif //RYUKO_CIRCLE_H
