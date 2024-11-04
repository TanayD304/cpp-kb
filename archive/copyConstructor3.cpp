#include<iostream>

using namespace std;

class myClass
{
private:
    int a;
    string b;
    bool c;

public:
    myClass() {
        a = 0;
        b = "";
        c = false;
        cout<<"Default"<<endl;
    }
    
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

    myClass(myClass &obj1)
    {
        this->a = obj1.a;
        this->b = obj1.b;
        this->c = obj1.c;
        cout << "Copy Constructor" << endl;
    }

    myClass& operator=(myClass& obj) {
        this->a = obj.a;
        this->b = obj.b;
        this->c = obj.c;
        cout<<"Copy assignment"<<endl;
    }
};

int main() {
    myClass o1(1, "Tanay", true);
    o1.print();
    myClass o2;
    o2 = o1;
    o2.print();
    myClass o3 = o1;
    o3.print();
    return 0;
}