#include <vector>
#include <string>
#include <iostream>
#include <ctime>
#include <fstream>
#include <algorithm>

using namespace std;

void trace(int A[], int N) {
    for (int i = 0; i < N; i++) {
        if (i > 0){
            cout << " ";
        }
        cout << A[i];
    }
    cout << endl;
}

void insertionSort(int A[], int N) {
    for (int i = 1; i < N; i++) {
        int v = A[i];
        int j = i - 1;
        while (j >= 0 && v < A[j]) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
        trace(A, N);
    }
}

int main(){
    int A[100], N;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    trace(A, N);
    insertionSort(A, N);
}