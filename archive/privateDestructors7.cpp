#include <iostream>

using namespace std;

class myClass
{
    ~myClass() { cout << "Destructor"<<endl; }

    public:
        myClass() { cout << "Construtor"<<endl; }

        void destruct() {
            delete this;
        }
};

int main()
{
    myClass *o1 = new myClass;
    o1->destruct();
    return 0;
}