#include<iostream>

using namespace std;

class myClass {
    private:
        int myVar;
    public:
        myClass() {
            myVar = 0;
            cout<<"Constructors defined inside class"<<endl;
        }

};

class myOtherClass {
    private:
        int myVar;
    public:
        myOtherClass();
};

myOtherClass::myOtherClass() {
    myVar = 0;
    cout<<"Constructors defined outside class"<<endl;
}

int main() {
    myClass o1;
    myOtherClass o2;
    myClass* p1 = new myClass();
    myOtherClass* p2 = new myOtherClass();
    return 0;
}
