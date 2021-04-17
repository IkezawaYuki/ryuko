#include <iostream>
#include "Accounting.h"
using namespace std;

int main() {
    Accounting nakano("nakano hayato", 1000, 2125, 1, 24);
    Accounting yamada("yamada hirohumi", 200, 2123, 7, 15);

    nakano.spend(200);
    yamada.earn(100);

    cout << "中野くん" << endl;
    cout << "氏名＝" << nakano.name() << endl;
    cout << "資産＝" << nakano.asset() << endl;
    cout << "誕生日＝" << nakano.birthday().year() << "年"
    << nakano.birthday().month() << "月"
    << nakano.birthday().date() << "日" << endl;

    cout << "山田くん" << endl;
    cout << "氏名＝" << yamada.name() << endl;
    cout << "資産＝" << yamada.asset() << endl;
    cout << "誕生日＝" << yamada.birthday() << endl;
}