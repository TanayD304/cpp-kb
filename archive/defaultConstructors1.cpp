#include<iostream>

using namespace std;

class myClass {
    private:
        int a;
        int b;
    public:
        myClass() {
            a=0;
            b=0;
            cout<<"Default with zero arguments"<<endl;
        }

        myClass(int a, int b=0) {
            this->a = a;
            cout<<"Default with 1 simple and 1 default argument"<<endl;
        }

};

int main() {
    myClass o1;
    myClass* p1 = new myClass();
    myClass o2(1,2);
    myClass* p2 = new myClass(1,2);
    myClass o3(1);
    myClass* p3 = new myClass(1);
    return 0;
}