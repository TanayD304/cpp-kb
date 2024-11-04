#include<iostream>

using namespace std;

class myClass {
    public:
        myClass() {cout<<"Static Member Function"<<endl;}
        static void greet() {cout<<"Hello"<<endl;}
};

int main(){
    myClass::greet();
    return 0;
}