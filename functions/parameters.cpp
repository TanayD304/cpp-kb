/*
#######################################NOTES#######################################
anything we pass in as input to function is called paramters/arguments of function
the args should match the type, number and order strictly
pass-by-value in default - copy of data is passed, change in data by function will not affect actual data
*/
#include <iostream>
#include <string>

using namespace std;

int addNumbers(int a, int b) {
    return a+b;
}

void test(int a) {
    cout<<"Inside function"<<endl;
    cout<<a<<endl;
    a+=50;
    cout<<a<<endl;
    cout<<"Outside function"<<endl;
}

int main()
{
    cout<<addNumbers(12,13)<<endl;
    // cout<<addNumbers("Tanay", 12)<<endl; error
    int a;
    cin>>a;
    cout<<a<<endl;
    test(a);
    cout<<a<<endl;
    return 0;
}