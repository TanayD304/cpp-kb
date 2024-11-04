#include<iostream>
#include<stdexcept>

using namespace std;

void func1() {
    cout<<"Start f1"<<endl;
    cout<<"End f1"<<endl;
}
void func2() {
    cout<<"Start f2"<<endl;
    func1();
    cout<<"End f2"<<endl;
}
void func3() {
    cout<<"Start f3"<<endl;
    func2();
    cout<<"End f3"<<endl;
}

void func1E() {
    cout<<"Start fe1"<<endl;
    throw 1;
    cout<<"End fe1"<<endl;
}
void func2E() {
    cout<<"Start fe2"<<endl;
    func1E();
    cout<<"End fe2"<<endl;
}
void func3E() {
    cout<<"Start fe3"<<endl;
    try {
        func2E();
    } catch(...) {
        cout<<"Caught exception"<<endl;
    }
    cout<<"End fe3"<<endl;
}

int main() {
    func3();
    func3E();
    return 0;
}