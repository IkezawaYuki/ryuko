//
// Created by 池澤勇輝 on 2021/04/22.
//

#ifndef RYUKO_RESIGNINGMEMBER_H
#define RYUKO_RESIGNINGMEMBER_H
#include <string>
#include <iostream>
#include "Member.h"

class ResigningMember : private Member {
public:
    ResigningMember(const std::string& name, int number, double w): Member(name, number, w) { }
    double get_weight() {
        std::cout << "退会した会員の体重の取得はできません" << endl;
        return 0;
    }
    using Member::no;
};

#endif //RYUKO_RESIGNINGMEMBER_H
