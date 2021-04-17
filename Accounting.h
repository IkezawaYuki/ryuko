#ifndef ___Class_Accounting
#define ___Class_Accounting

#include <string>
#include "Date.h"

class Accounting {
    std::string full_name;
    long crnt_asset;
    Date birth;
public:
    Accounting(const std::string& name, long amnt, const Date& op);
    std::string name() { return full_name; }
    long asset() { return crnt_asset; }
    void earn(long amnt);
    void spend(long amnt);
    Date birthday() const { return birth; }
};

#endif