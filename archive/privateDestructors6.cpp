#include <iostream>

using namespace std;

class myClass
{
    ~myClass(){cout<<"Destructor";}

    friend void deleteMyClass(myClass* a);
};

void deleteMyClass(myClass* a) {
    delete a;
}

int main()
{
    myClass *o1 = new myClass;
    deleteMyClass(o1);
    return 0;
}