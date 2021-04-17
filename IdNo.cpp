//
// Created by 池澤勇輝 on 2021/04/17.
//

#include "IdNo.h"

int IdNo::counter = 0;

IdNo::IdNo() {
    id_no = ++counter;
}

int IdNo::id() const {
    return id_no;
}

int IdNo::get_max_id() {
    return counter;
}