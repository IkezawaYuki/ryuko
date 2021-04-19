#include <iostream>
#include "Accounting.h"
#include "Date.h"
using namespace std;

void display(const Date& day)
{
    string dw[] = {"日", "月", "火","水","木","金","土"};
    cout << "・日付" << day << "に関する情報" << endl;
    cout << "　曜日は" << dw[day.day_of_week()] << "曜日" << endl;
    cout << "　年内経過日数" << day.day_of_year() << "日" << endl;
    cout << "　その年は閏年で" << (day.leap_year() ? "ある" : "はない") << endl;
}


int main() {

}