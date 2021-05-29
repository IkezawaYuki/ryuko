#include <vector>
#include <string>
#include <iostream>
#include <ctime>
#include <fstream>
#include <algorithm>

using namespace std;

void trace(int R[], int N) {
    for (int i = 0; i < N; i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << R[i];
    }
    cout << endl;
}

void insertionSort(int R[], int N) {
    for (int i = 1; i < N; i++) {
        int j = i - 1;
        int v = R[i];
        while (j >= 0 && v < R[j]) {
            R[j+1] = R[j];
            j--;
        }
        R[j+1] = v;
        trace(R, N);
    }
}

int bubbleSort(int R[], int N) {
    int sw = 0;
    bool flag = true;
    for (int i = 0; flag; i++) {
        flag = false;
        for (int j = N - 1; j >= i + 1; j--) {
            if (R[j-1] > R[j]) {
                swap(R[j], R[j-1]);
                flag = true;
                sw++;
            }
        }
    }
    return sw;
}

int selectionSort(int R[], int N) {
    int sw = 0;
    for (int i = 0; i < N - 1; i++) {
        int minv = i;
        for (int j = i; j < N; j++) {
            if (R[j] < R[minv]) {
                minv = j;
            }
        }
        swap(R[minv], R[i]);
        if (minv != i) sw++;
    }
    return sw;
}

int main(){
    int R[100], N;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> R[i];

    trace(R, N);
//    insertionSort(R, N);

//    int sw = bubbleSort(R, N);
    int sw = selectionSort(R, N);
    cout << sw << endl;
    trace(R, N);
}