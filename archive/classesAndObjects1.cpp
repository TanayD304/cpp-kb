#include<iostream>

using namespace std;

// classes

class myClass {
    private: // access specifier
        int a; // data memeber/member variable
    public: // access specifier
        void setA(int a) { // member function
            this->a = a;
        }

        int getA() { // member function
            return a;
        }
};

int main() {
    //object
    myClass myObj;
    int a;
    cin>>a;
    myObj.setA(a);
    cout<<"Obj1:"<<myObj.getA()<<endl;

    myClass* myObjPtr = new myClass();
    cin>>a;
    myObjPtr->setA(a);
    cout<<"Obj2:"<<myObjPtr->getA()<<endl;

    delete myObjPtr;

    return 0;
}