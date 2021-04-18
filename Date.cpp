
#include "Date.h"
#include <ctime>
#include <iostream>
#include <sstream>

using namespace std;

int Date::dmax[] = {31,28,31,30,31,30,31,31,30,31,30,31};

int Date::days_of_month(int y, int m)
{
    return dmax[m-1]+(m==2&&leap_year(y));
}

int Date::days_of_year(int y)
{
    return 365 + leap_year(y);
}

int Date::adjusted_month(int m)
{
    return m < 1 ? 1 : m > 12 ? 12 : m;
}

int Date::adjusted_day(int y, int m, int d)
{
    if (d < 1) return 1;
    int max_day = days_of_month(y, m);
    return d > max_day ? max_day : d;
}


Date::Date() {
    time_t current = time(NULL);
    struct tm* local = localtime(&current);

    y = local->tm_year + 1900;
    m = local->tm_mon + 1;
    d = local->tm_mday;
}


Date::Date(int yy, int mm, int dd)
{
    set(yy, mm, dd);
}

void Date::set_year(int yy)
{
    y = yy;
    d = adjusted_day(y, m, d);
}

void Date::set_month(int mm)
{
    m = adjusted_month(mm);
    d = adjusted_day(y, m, d);
}

void Date::set_day(int dd)
{
    d = adjusted_day(y, m, dd);
}

void Date::set(int yy, int mm, int dd)
{
    y = yy;
    m = adjusted_month(mm);
    d = adjusted_day(y, m, dd);
}


Date Date::preceding_day() const
{
    Date temp = *this;
    if (temp.d > 1) {
        temp.d--;
    } else {
        if (--temp.m < 1) {
            temp.y--;
            temp.m = 12;
        }
        temp.d = dmax[temp.m - 1];
    }
    return temp;
}

string Date::to_string() const {
    ostringstream s;
    s << y << "年" << m << "月" << d << "日";
    return s.str();
}

int Date::day_of_week() const {
    int yy = y;
    int mm = m;
    if (mm == 1 || m == 2){
        yy--;
        mm += 12;
    }
    return (yy+yy/4-yy/100+yy/400+(13*mm+8)/5+d)%7;
}

ostream& operator<<(ostream& s, const Date& x)
{
    return s << x.to_string();
}

istream& operator>>(istream& s, Date& x)
{
    int yy, mm, dd;
    char ch;
    s >> yy >> ch >> mm >> ch >> dd;
    x = Date(yy, mm, dd);
    return s;
}