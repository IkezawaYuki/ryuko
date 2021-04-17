#include <string>
#include <iostream>

#include "Accounting.h"

Accounting::Accounting(std::string name, long amnt, int y, int m, int d)
    :full_name(name), crnt_asset(amnt), birth(y,m,d){
}

void Accounting::earn(long amnt) {
    crnt_asset += amnt;
}

void Accounting::spend(long amnt) {
    crnt_asset -= amnt;
}