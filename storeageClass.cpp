#include<iostream>

using namespace std;

int b;

thread_local int ptaNahi = 10;

void func2() {
    b = 20;
    cout<<b<<endl;
}

void func1() {
    // auto
    int a = 10;
    cout<<a<<endl;

    extern int b;
}

void func3() {
    int a = 0;
    cout<<a<<endl;
    a++;
    cout<<a<<endl;
}

void func4() {
    static int a = 0;
    cout<<a<<endl;
    a++;
    cout<<a<<endl;
}

class myclass {
    public:
        int a=10;
        mutable int b=20;
};


int main() {
    // func1();
    // func2();

    // func3();
    // func3();
    // func3();

    // func4();
    // func4();
    // func4();
    // func4();
    // func4();

    // register int ae = 10;
    // cout<<ae<<endl;

    // const myclass o1;
    // cout<<o1.a<<endl;
    // cout<<o1.b<<endl;

    // // o1.a = 23;
    // o1.b = 23;
    // cout<<o1.a<<endl;
    // cout<<o1.b<<endl;
    cout<<ptaNahi<<endl;
    return 0;
}