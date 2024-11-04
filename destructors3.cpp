#include <iostream>

using namespace std;

static int count = 0;

class myClass
{
private:
    int a;

public:
    myClass()
    {
        cout << "Constructor" << endl;
        count++;
        cout << count << endl;
    }

    ~myClass()
    {
        cout << "Destructor" << endl;
        count--;
        cout << count << endl;
    }
};

int main()
{
    myClass o;
    myClass o1;
    o1.~myClass();
    myClass o2;
    o2.~myClass();
    return 0;
}