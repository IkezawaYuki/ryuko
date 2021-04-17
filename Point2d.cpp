//
// Created by 池澤勇輝 on 2021/04/17.
//

#include "Point2d.h"

int Point2d::counter = 0;

Point2d::Point2d(int x, int y) : xp(x), yp(y){
    id_no = ++counter;
}

int Point2d::get_max_id() {
    return counter;
}