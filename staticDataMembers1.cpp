#include <iostream>

using namespace std;

class myClass
{
public:
    static int x;
    myClass() { cout << "default constructor" << endl; }
};

int myClass::x = 0;

int main()
{
    cout << myClass::x << endl;
    myClass o1;
    myClass o2;
    o1.x = 4;
    cout << myClass::x << endl;
    o2.x = 10;
    cout << myClass::x << endl;
    return 0;
}