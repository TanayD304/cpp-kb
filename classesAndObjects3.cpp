#include<iostream>

using namespace std;

class myClass {
    public:
        void print1() {
            cout<<"Print from inside"<<endl;
        }

        void print2();
};

void myClass::print2() {
    cout<<"Print from outside"<<endl;
}

int main() {
    myClass myObj;

    myObj.print1();
    myObj.print2();
    return 0;
}