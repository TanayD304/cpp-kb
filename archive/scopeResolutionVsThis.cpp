#include<iostream>

using namespace std;

class myClass{
    public:
        static void greet(){cout<<"Hello"<<endl;}
        void greet1() { cout << "Hello1" << endl; }
        void ulti(){myClass::greet(); this->greet1();}
};

int main() {
    myClass o1;
    o1.ulti();
    return 0;
}