#include<iostream>

using namespace std;

class myClass{
    private:
        int a;
    public:
        myClass() {
            a=0;
            cout<<"Default constructor"<<endl;
        }

        myClass(int a) {
            this->a=a;
            cout<<"Parameterized constructor"<<endl;
        }
        // copy constructor is bit tricky to implement
        // move constructor is bit tricky to implement
};

int main() {
    myClass o1();
    myClass* p1 = new myClass();
    int a;
    cin>>a;
    myClass o2();
    myClass* p2 = new myClass(a);
    return 0;
}

