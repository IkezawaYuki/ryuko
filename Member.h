//
// Created by 池澤勇輝 on 2021/04/22.
//

#ifndef RYUKO_MEMBER_H
#define RYUKO_MEMBER_H
#include <string>

class Member {
    std::string full_name;
    int number;
    double weight;
public:
    Member(const std::string& name, int no, double w);
    std::string name() const { return full_name; }
    int no() const { return number; }
    double get_weight() { return weight; }
    void set_weight(double w) { weight = (w > 0) ? w : 0; }
    void print() const;
};


#endif //RYUKO_MEMBER_H
