#include<iostream>

using namespace std;

void demo() {
    static int a = 0;
    cout<<a<<endl;
    a++;
    cout<<a<<endl;
}

class myClass {
    public:
        static int a;
        int b;

        myClass() {
            cout<<"Constructor"<<endl;
        }
        ~myClass() {
            cout<<"Destructor"<<endl;
        }

        static void greet() {
            cout<<"Hello"<<endl;
        }
};
int myClass::a;
int main() {
    // demo();
    // demo();
    // demo();
    // demo();
    // demo();

    // myClass myobj1;
    // myClass myobj2;

    // myClass::a=5;
    // cout<<myClass::a<<endl;

    // if(true) myClass o1;
    // cout<<"bye1"<<endl;
    // if(true) static myClass o1;
    // cout<<"bye"<<endl;

    myClass::greet();
    return 0;
}