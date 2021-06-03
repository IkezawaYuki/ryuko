#include <vector>
#include <string>
#include <iostream>
#include <ctime>
#include <fstream>
#include <algorithm>

using namespace std;
#define LEN 10005;

typedef struct pp {
    char name[100];
    int t;
} P;

P Q[10005];
int head, tail, n;

void enqueue(P x) {
    Q[tail] = x;
    tail = (tail + 1) % LEN;
}

P dequeue() {
    P x = Q[head];
    head = (head + 1) % LEN;
    return x;
}

int min(int a, int b) { return a < b ? a : b; }

int main(){
    int n, q;
    int elapse = 0;
    scanf("%d %d", &n, &q);
    for (int i = 1; i < n + 1; i++) {
        scanf("%s", Q[i].name);
        scanf("%d", &Q[i].t);
    }
    int head = 1, tail = n;
    while (head != tail) {
        P x = dequeue();
        int c = min(q, x.t);
        x.t -= c;
        elapse += c;
        if (x.t != 0) {
            enqueue(x);
        }
    }
    cout << elapse << endl;
}