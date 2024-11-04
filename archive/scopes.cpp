#include<iostream>

using namespace std;

int glo = 5; // global variable

void func1() {
    cout<<glo<<endl;
    return;
}

void func2() {
    int loc = 23; // local variable
    cout<<loc<<endl;
    return;
}

int main() {
    func1();
    glo=10;
    func1();

    func2();
    // loc=24; // will give error
    func2();
    return 0;
}