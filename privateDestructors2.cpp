#include <iostream>

using namespace std;

class myClass
{
    ~myClass() { cout << "Destructor"; }
};

int main()
{
    myClass o1;
    return 0;
}

// will give error because destructor is private