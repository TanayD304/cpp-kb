/*
#######################################NOTES#######################################

*/
#include <iostream>
#include <string>

using namespace std;

void sayHello();
void sayBye();
void printInt(int);
void printInt2(int a);

int main()
{
    sayHello();
    return 0;
}

void sayHello()
{
    cout << "Hello" << endl;
    int a;
    cin >> a;
    printInt(a);
    printInt2(a);
    sayBye();
}

void printInt(int a) { cout << a << endl; }
void printInt2(int a) { cout << a << endl; }
void sayBye() { cout << "Bye" << endl; }