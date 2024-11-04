#include <iostream>

using namespace std;

class myClass
{
private:
    int a;
    string b;
    bool c;

public:
    myClass(int a, string b, bool c = true)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    void print()
    {
        cout << a << " " << b << " " << c << endl;
    }

    // myClass(myClass &obj1)
    // {
    //     this->a = obj1.a;
    //     this->b = obj1.b;
    //     this->c = obj1.c;
    //     cout << "Copy Constructor" << endl;
    // }

    // shallow and deep copy
    void printAddr()
    {
        cout << &a << " " << &b << " " << &c << endl;
    }
};

int main()
{
    myClass o1(1, "Tanay", true);
    o1.print();
    o1.printAddr();
    myClass o2(o1);
    o2.print();
    o2.printAddr();
    myClass *p1 = new myClass(o1);
    p1->print();
    p1->printAddr();
    return 0;
}