

#ifndef RYUKO_SENIORMEMBER_H
#define RYUKO_SENIORMEMBER_H
#include <string>
#include "Member.h"

class SeniorMember : public Member {
    int care_level;
public:
    SeniorMember(const std::string& name, int no, double w, int level = 0);
    int get_care_level() const { return care_level; }
    void set_care_level(int level) {
        care_level = (level >= 1 && level <= 5) ? level : 0;
    }
    void print() const;
};

#endif //RYUKO_SENIORMEMBER_H
