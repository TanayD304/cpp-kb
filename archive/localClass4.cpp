#include<iostream>

using namespace std;

void func() {
    static int a = 10;
    enum b {
        i=20,
        j=30
    };
    int c = 40;
    class local {
        void hello() {
            cout<<a<<endl<<i<<endl<<j<<endl;
        } //ok
        // void hello1() {
        //     cout<<c<<endl;
        // } // nok
    };
}

int main() {
    return 0;
}