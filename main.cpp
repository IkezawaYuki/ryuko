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

void change(Date& day)
{
    while(true){
        cout << "[1]年変更 [2]月変更 [3]日変更 [4]年月日変更"
              << "[5]n日進める [6]n日戻る [0]戻る：";
        int selected;
        cin >> selected;
        if (selected == 0) return;
        int y, m, d, n;
        if (selected == 1 || selected == 4) { cout << "年："; cin >> y; }
        if (selected == 2 || selected == 4) { cout << "月："; cin >> m; }
        if (selected == 3 || selected == 4) { cout << "日："; cin >> d; }
        if (selected == 5 || selected == 6) { cout << "日数："; cin >> n; }
        switch (selected) {
            case 1: day.set_year(y); break;
            case 2: day.set_month(m); break;
            case 3: day.set_day(d); break;
            case 4: day.set(y, m, d); break;
            case 5: day += n; break;
            case 6: day -= n; break;
        }
        cout << day << "に更新されました。" << endl;
    }
}

void inc_dec(Date& day)
{
    while (true)
    {
        cout << "[1]++day [2]day++ [3]--day [4]day-- [0]戻る：";
        int selected;
        cin >> selected;
        if (selected == 0) return;
        switch (selected) {
            case 1: cout << "++day = " << ++day << endl; break;
            case 2: cout << "day++ = " << day++ << endl; break;
            case 3: cout << "--day = " << --day << endl; break;
            case 4: cout << "day-- = " << day-- << endl; break;
        }
        cout << "day = " << day << endl;
    }
}

void before_after(Date& day)
{
    while (true)
    {
        cout << "[1]翌日 [2] 前日 [3]n日後(day+n) [4]日後";
        cout << "[5]n日前 [0]戻る：";
        int selected;
        cin >> selected;
        if (selected == 0) return;
        int n;
        if (selected >= 3 && selected <= 5) {
            cout << "日数：";
            cin >> n;
        }
        cout << "それは";
        switch (selected) {
            case 1:
                cout << day.following_day(); break;
            case 2:
                cout << day.preceding_day(); break;
            case 3:
                cout << day + n; break;
            case 4:
                cout << n + day; break;
            case 5:
                cout << day - n;

        }
    }
}

int main() {

}