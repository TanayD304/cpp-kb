#include<iostream>

using namespace std;

class myClass { // class defination
    private: // access specifier
        int a = 10; // data member
        int b; // member variable

    public:
        void setterA(int a) {
            this->a = a;
        } // member function

        int getterA() {
            return a;
        }

        void setterB(int b) {
            this->b = b;
        }

        int getterB() {
            return b;
        }
};

int main() {
    myClass myObj1;
    cout<<myObj1.getterA()<<endl;
    myObj1.setterA(3);
    myObj1.setterB(5);
    cout<<myObj1.getterB()<<endl;
    cout<<myObj1.getterA()<<endl;
    return 0;
}