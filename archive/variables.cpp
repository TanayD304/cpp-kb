#include<iostream>

using namespace std;

int main() {
    int a; // declaration
    int b = 10; // definition
    a = 20; // initialization

    // definition = declaration + initialization
    cout<<a<<endl<<b<<endl;
    b = 30;
    a = 40;
    cout<<a<<endl<<b<<endl;

    return 0;
}