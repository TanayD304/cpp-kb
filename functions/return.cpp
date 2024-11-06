/*
#######################################NOTES#######################################
Return is what function gives as an output
It can be anywhere in function
There could be n number of returns buit after 1 gets executed function is terminated
It is needed to be declared before hand about the return type
we can return nothing as well - void
*/
#include <iostream>
#include <string>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int condAdd(int a, int b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    return a + b;
}

float circum(int r)
{
    return 3.14 * 2 * r;
}

void sayHello() { cout << "Hello" << endl; }

int main()
{
    sayHello();
    int a, b, r;
    cin>>a>>b>>r;
    cout << circum(r) << endl;
    cout << add(a, b) << endl;
    cout << condAdd(a, b) << endl;
}
