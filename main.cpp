#include <vector>
#include <string>
#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

vector<string> strptary_to_vec(char** p, int n)
{
    vector<string> temp;
    for (int i = 0; i < n; i++)
        temp.push_back(p[i]);
    return temp;
}

char fname[] = "lasttime.txt";

void get_date()
{
    ifstream fis(fname);
    if (fis.fail()) {
        cout << "本プログラムを実行するのは初めてですね" << endl;
    } else {
        int year, month, day, h, m, s;
        fis >> year >> month >> day >> h >> m >> s;
        cout << year << "年" << month << "月" << day << "日" << h << "時" << m << "分" << s << "秒でした" << endl;
    }
}

void put_data()
{
    ofstream fos(fname);
    if (fos.fail())
        cout << "ファイルをオープンできません";
    else {
        time_t t = time(NULL);
        struct tm* local = localtime(&t);
        fos << local->tm_year + 1900 << ' ' << local->tm_mon + 1 << " "
        << local->tm_mday << " " << local->tm_hour << " "
        << local->tm_min << " " << local->tm_sec << endl;
    }
}

int main() {
    get_date();
    put_data();
}

//
//int main(int argc, char** argv)
//{
//    vector<string> arg = strptary_to_vec(argv, argc);
//    for (vector<string>::size_type i = 0; i < arg.size(); i++)
//        cout << "arg[" << i << "] = " << arg[i] << '\n';
//
//    string s1, s2;
//
//    cout << "文字列s1 : "; getline(cin, s1);
//    cout << "文字列s2 : "; getline(cin, s2);
//
//    cout << "s1 = ";
//    for (string::size_type i = 0; i < s1.length(); i++)
//        cout << s1[i];
//    cout << '\n';
//
//    cout << "s2 = ";
//    for (string::const_iterator i = s2.begin(); i != s2.end(); i++)
//        cout << *i;
//    cout << '\n';
//
//    string::size_type idx = s1.find(s2);
//    if (idx == string::npos)
//        cout << "s2はs1に含まれません" << endl;
//    else
//        cout << "s2はs1の" << (idx + 1) << "文字目に含まれます" << endl;
//}