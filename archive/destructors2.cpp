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
        cout<<count<<endl;
    }

    ~myClass()
    {
        cout << "Destructor" << endl;
        cout << count << endl;
        count--;
    }
};

int main()
{
    myClass o1;
    myClass o2;
    myClass o3;
    myClass o4;
    myClass o5;
    return 0;
}