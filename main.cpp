#include <vector>
#include <string>
#include <iostream>
#include <ctime>
#include <fstream>
#include <algorithm>

using namespace std;

int cnt;
vector<int>G;

void insertionSort(int A[], int N, int gap) {
    for (int i = gap; i < N; i++) {
        int v = A[i];
        int j = i - gap;
        while (j >= 0 && A[j] > v) {
            A[j+gap] = A[j];
            j -= gap;
            cnt++;
        }
        A[j+gap] = v;
    }
}

void shellSort(int A[], int N) {
    for (int h = 1; ;) {
        if (h > N) {
            break;
        }
        G.push_back(h);
        h = h * 3 + 1;
    }

    for (int i = G.size()-1; i >= 0; i--) {
        insertionSort(A, N, G[i]);
    }
}


int main(){
    int A[10000], N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    cnt = 0;
    shellSort(A, N)
}