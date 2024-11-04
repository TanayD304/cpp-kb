#include<iostream>

using namespace std;

class myClass {
    int a;
    int b;

    public:
        void setter(int a, int b) {
            this->a = a;
            this->b = b;
        }

        void getter() {
            cout<<this->a<<endl;
            cout<<this->b<<endl;
        }

        myClass& addr() {
            return *this;
        }
};

int main() {
    myClass o1;
    int a, b;
    cin>>a>>b;
    o1.setter(a,b);
    o1.getter();
    return 0;
}