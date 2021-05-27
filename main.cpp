#include <vector>
#include <string>
#include <iostream>
#include <ctime>
#include <fstream>
#include <algorithm>

using namespace std;

int MAX = 2000000;

int main(){
    int Arr[MAX], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> Arr[i];

    int maxv = -2000000;
    int minv = Arr[0];

    for (int i = 1; i < n; i++) {
        maxv = max(maxv, Arr[i] - minv);
        minv = min(minv, Arr[i]);
    }

    cout << maxv << endl;
}