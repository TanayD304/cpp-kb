#include<iostream>

using namespace std;

class myClass {
    private:
        int a;
        int b;
    public:
        myClass() {
            a = 0;
            b = 0;
            cout<<"Default Constructors"<<endl;
        }

        myClass(int a, int b) {
            this->a = a;
            this->b = b;
            cout<<"Parameterised Constructors"<<endl;
        }

        myClass(myClass& o1) {
            this->a = o1.a;
            this->b = o1.b;
            cout<<"Copy Constructor"<<endl;
        }

        myClass(myClass* o1) {
            this->a = o1->a;
            this->b = o1->b;
            cout<<"Copy Constructor"<<endl;
        }

};

int main() {
    myClass o1;
    myClass* p1 = new myClass();
    int a,b;
    cin>>a>>b;
    myClass o2(a, b);
    myClass* p2 = new myClass(a, b);
    myClass o3(o2);
    myClass* p3 = new myClass(p2);
    return 0;
}