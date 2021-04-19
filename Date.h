#ifndef RYUKO_COUNTER_H
#define RYUKO_COUNTER_H

#include <iostream>
#include <string>

class Date {
    int y;
    int m;
    int d;

    static int dmax[];
    static int days_of_year(int y);
    static int days_of_month(int y, int m);
    static int adjusted_month(int m);
    static int adjusted_day(int y, int m, int d);
public:
    Date();
    Date(int yy, int mm = 1, int dd = 1);
    static bool leap_year(int year){
        return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
    }
    int year(){return y;}
    int month(){return m;}
    int date(){return d;}
    void set_year(int yy);
    void set_month(int mm);
    void set_day(int dd);
    void set(int yy, int mm, int dd);
    bool leap_year() const { return leap_year(y); }

    Date preceding_day() const;
    Date following_day() const;
    std::string to_string() const;
    int day_of_week() const;
    int day_of_year() const;
    Date& operator++();
    Date operator++(int);
    Date& operator--();
    Date operator--(int);
    Date& operator+=(int n);
    Date& operator-=(int n);
    Date operator+(int n) const;
    friend Date operator+(int n, const Date& date);
    Date operator-(int n) const;
    long operator-(const Date& date) const;
    bool operator==(const Date& date) const;
    bool operator!=(const Date& date) const;
    bool operator>(const Date& date) const;
    bool operator>=(const Date& date) const;
    bool operator<(const Date& date) const;
    bool operator<=(const Date& date) const;
};

std::ostream& operator<<(std::ostream& s, const Date& x);
std::istream& operator>>(std::istream& s, Date& x);

#endif