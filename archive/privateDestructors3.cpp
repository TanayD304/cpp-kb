#include <iostream>

using namespace std;

class myClass
{
    ~myClass() { cout << "Destructor"; }
};

int main()
{
    myClass* o1;
    return 0;
}

// will not give error as we are only creating an pointer to object not the object itself
