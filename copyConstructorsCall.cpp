#include<iostream>

using namespace std;

class myClass {
    public:
        myClass() {cout<<"Default"<<endl;}
        myClass(myClass &o) { cout << "copy" << endl; }
};

myClass foo() {
    myClass o1;
    return o1;
}

void foo2(myClass& o1) {
    return;
}

int main() {
    myClass o1;

    foo();

    foo2(o1);

    myClass o2 = o1;

    return 0;
}