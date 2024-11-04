#include<iostream>

using namespace std;

class MyClass {
    // class defination
    public:
        int a=10;
};
int main() {
    MyClass myObj; // object
    cout<<myObj.a<<endl;
    myObj.a=20;
    cout<<myObj.a<<endl;
    MyClass* myObjPtr = new MyClass(); // object pointer
    cout<<myObjPtr->a<<endl;
    myObjPtr->a=30;
    cout<<myObjPtr->a<<endl;
    return 0;
}