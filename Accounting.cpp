#include <string>
#include <iostream>

#include "Accounting.h"

Accounting::Accounting(const std::string& name, long amnt, const Date& op)
    :full_name(name), crnt_asset(amnt), birth(op){
}

void Accounting::earn(long amnt) {
    crnt_asset += amnt;
}

void Accounting::spend(long amnt) {
    crnt_asset -= amnt;
}