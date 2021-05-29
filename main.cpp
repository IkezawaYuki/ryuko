#include <vector>
#include <string>
#include <iostream>
#include <ctime>
#include <fstream>
#include <algorithm>

using namespace std;

struct Card {
    char suit;
    int value;
};

void bubble(Card C[], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = N - 1; i <= j; j--) {
            if (C[j-1].value > C[j].value) {
                Card t = C[j];
                C[j] = C[j-1];
                C[j-1] = t;
            }
        }
    }
}

void selection(Card C[], int N) {
    for (int i = 0; i < N; i++) {
        int minv = i;
        for (int j = i; j < N; j++) {
            if (C[minv].value > C[j].value) {
                minv = j;
            }
        }
        Card t = C[i];
        C[i] = C[minv];
        C[minv] = t;
    }
}

void print(Card C[], int N) {
    for (int i = 0; i < N; i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << C[i].suit << C[i].value;
    }
    cout << endl;
}

bool isSuitable(Card C1[], Card C2[], int N) {
    for (int i = 0; i < N; i++) {
        if (C1[i].suit != C2[i].suit) {
            return false;
        }
    }
    return true;
}

int main(){
    Card C1[100], C2[100];
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> C1[i].suit >> C1[i].value;
    }
    for (int i = 0; i < N; i++) {
        C2[i] = C1[i];
    }

    bubble(C1, N);
    print(C1, N);
    cout << "suitable" << endl;
    selection(C2, N);
    print(C2, N);
    if (isSuitable(C1, C2, N)) {
        cout << "suitable";
    } else {
        cout << "not suitable";
    }
}