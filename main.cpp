#include <iostream>
#include "Accounting.h"
#include "Counter.h"
using namespace std;


int main() {
    int no;
    Counter x;
    Counter y;
    cout << "カウントアップ回数";
    cin >> no;
    for (int i = 0; i < no; i++) {
        cout << x++ << " " << ++y << endl;
    }

}