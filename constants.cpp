#include<iostream>
#define c 10
using namespace std;

int main() {
    const int a = 10;
    cout<<a<<endl;
    // a=12;
    // cout<<a<<endl;
    // const int b;
    // b=10;
    // cout<<b<<endl;

    constexpr int b=20;
    cout<<b<<endl;
    cout<<c<<endl;
    return 0;
}