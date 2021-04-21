#include <iostream>
using namespace std;

class Bas {
public:
    int a;
    void f() { cout << "Bas::f()" << endl; }
};

class Drv : public Bas {
public:
    int b;
    void g() { cout << "Drv::g()" << endl; }
};

int main(){
    Bas has;
    Drv drv;

    int Bas::* ptr1 = &Bas::a;

}