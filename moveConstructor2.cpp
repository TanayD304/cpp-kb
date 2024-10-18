#include <iostream>

using namespace std;

class myClass
{
private:
    int a;

public:
    myClass(int a) : a(a)
    {
        cout << "Parameterised" << endl;
    }

    void print()
    {
        if (a)
            cout << a << endl;
        else
            cout << "NULL" << endl;
    }

    myClass(myClass &&obj)
    {
        a = obj.a;
        obj.a = 0;
        cout << "move constructor is called" << endl;
    }

    myClass &operator=(myClass &&obj)
    {
        if (this != &obj)
        {
            a = obj.a;
            obj.a = 0;
            cout << "Move Assignment" << endl;
        }
    }
};

int main()
{
    myClass o1(23);
    o1.print();

    myClass o2 = move(o1);
    o2.print();
    o1.print();

    myClass o3(48);
    o3.print();
    o3 = move(o2);
    o3.print();
    o2.print();
    return 0;
}