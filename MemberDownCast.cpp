#include <iostream>
#include <typeinfo>
#include "Member.h"
#include "SeniorMember.h"

void senior_print(Member* p)
{
    SeniorMember* d = dynamic_cast<SeniorMember*>(p);
    if(d)
        d->print();
}

int main() {
    Member kaneko("kaneno", 15, 75.2);
    SeniorMember susaki("susaki", 43, 59.3);

    senior_print(&kaneko);
    senior_print(&susaki);
}