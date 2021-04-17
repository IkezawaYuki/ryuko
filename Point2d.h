#ifndef RYUKO_POINT2D_H
#define RYUKO_POINT2D_H
#include <iostream>

class Point2d {
    int xp, yp;
    int id_no;
    static int counter;
public:
    Point2d(int x = 0, int y = 0);
    int id() const { return id_no; }
    void print() const {
        std::cout << "(" << xp << "," << yp << ")";
    }
    static int get_max_id();
};

#endif //RYUKO_POINT2D_H
