#include<iostream>

using namespace std;

void hello() {return;};
int x;

void func() {
    class local2 {

    };
    class local {
        local2 l2;
        void hello1(){hello();};
        void f1() {
            cout<<x<<endl;
        }
    };
}

int main() {
    return 0;
}