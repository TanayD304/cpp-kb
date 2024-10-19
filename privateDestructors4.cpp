#include <iostream>

using namespace std;

class myClass
{
    ~myClass() { cout << "Destructor"; }
};

int main()
{
    myClass *o1 = new myClass;
    return 0;
}

// will not give error as the object is created dynamically... something which is created dynamically its programmers responsibility to clear it not compilers so it doesnt bother

