#include <iostream>

using namespace std;

class myClass
{
    ~myClass() { cout << "Destructor"; }
};

int main()
{
    myClass *o1 = new myClass;
    delete o1;
    return 0;
}

// will give error as now the destructor is called and thus its private and will give error
