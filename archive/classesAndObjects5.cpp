#include<iostream>

using namespace std;

class myClass {
    public:
        myClass() { cout<<"Constructor"<<endl;}
        ~myClass() { cout<<"Destructor"<<endl;}
};

int main() {
    myClass* o = new myClass();
    delete o;
    return 0;
}