#include<iostream>

using namespace std;

class myClass {
    public:
        int a;
        static int b;
};

int myClass::b = 23;

class myClass2 {
    public:
        static int c;
};

int myClass2::c = 10;

int main() {
    myClass obj1;
    myClass obj2;
    obj1.a = 10;
    obj2.a = 20;
    cout<<obj1.a<<endl<<obj2.a<<endl;
    cout<<myClass::b<<endl;
    // int myClass::b = 15;
    myClass::b = 15;
    cout<<myClass::b<<endl;
    // cout<<obj1.b<<endl<<obj2.b<<endl; obj1.b and obj2.b will give error
    // cout<<obj1.a<<endl<<obj2.a<<endl;

    cout<<myClass2::c<<endl;

    return 0;
}