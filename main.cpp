#include <iostream>
#include "Date.h"
using namespace std;

int main() {
    Date a(2025, 11, 18);
    Date b = a;
    Date c = Date(2023, 12, 27);

    cout << a.year() << "年" << a.month() << "月" << a.date() << "日" << endl;
    cout << b.year() << "年" << b.month() << "月" << b.date() << "日" << endl;
    cout << c.year() << "年" << c.month() << "月" << c.date() << "日" << endl;

}