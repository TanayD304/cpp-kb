#include<iostream>

using namespace std;

class base {
    public:
        void print() {
            cout<<"Base"<<endl;
        } // statically binded
        void callFunction() {
            this->print();
        }

        virtual void print1() {
            cout<<"Base"<<endl;
        } // dynamically binded
        void callFunction1() {
            this->print1();
        }
};

class derived:public base {
    public:
        void print() {
            cout<<"Derived"<<endl;
        }

        void print1() {
            cout<<"Derived"<<endl;
        }
};

int main() {
    base* ptr1 = new base();
    derived* ptr2 = new derived();

    ptr1->callFunction();
    ptr2->callFunction();

    ptr1->callFunction1();
    ptr2->callFunction1();

    return 0;
}

