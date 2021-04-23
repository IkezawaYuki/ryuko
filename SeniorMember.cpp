//
// Created by 池澤勇輝 on 2021/04/23.
//

#include <string>
#include <iostream>
#include "SeniorMember.h"

using namespace std;

SeniorMember::SeniorMember(const std::string &name, int no, double w, int level)
: Member(name, no, w)
{
    set_care_level(level);
}

void SeniorMember::print() const
{
    cout << "No." << no() << ":" << name() << " (" << get_weight() << "kg) "
    << "要介護度=" << care_level << endl;
}