//
// Created by 池澤勇輝 on 2021/04/22.
//

#include <iostream>
#include "Member.h"

using namespace std;

Member::Member(const std::string &name, int no, double w) : full_name(full_name), number(no)
{
    set_weight(w);
}

void Member::print() const
{
    cout << "No." << number << ":" << full_name << " (" << weight << "kg)" << endl;
}