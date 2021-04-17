#include <iostream>
#include <string>

class Date {
    int y;
    int m;
    int d;
public:
    Date();
    Date(int yy, int mm = 1, int dd = 1);
    int year(){return y;}
    int month(){return m;}
    int date(){return d;}

    Date precending_day() const;
    std::string to_string() const;
    int day_of_week() const;
};

std::ostream& operator<<(std::ostream& s, const Date& x);
std::istream& operator>>(std::istream& s, Date& x);
