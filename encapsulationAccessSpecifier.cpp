#include<iostream>

using namespace std;

class A {
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        A() {
            a = 0;
            b = 0;
            c = 0;
        }
        A(int a, int b, int c) {
            this->a = a;
            this->b = b;
            this->c = c;
        }

        int getA() {
            return this->a;
        }

        void setA(int a) {
            this->a = a;
        }

        int getB() {
            return this->b;
        }

        void setB(int b) {
            this->b = b;
        }

        int getC() {
            return this->c;
        }

        void setC(int c) {
            this->c = c;
        }
};

class B : public A{
    public:
        B(){}; // need to declare a construtor
        int getBChild() {
            return b;
        }

        void setBChild(int b) {
            this->b = b;
        }

};



int main() {
    A obj(1,2,3);
    B obj2;

    // cout<<obj.a<<endl; // private
    // cout<<obj.b<<endl; // protected
    cout<<obj.getA()<<endl;
    obj.setA(4);
    cout<<obj.getA()<<endl;
    cout<<obj.getB()<<endl;
    obj.setB(5);
    cout<<obj.getB()<<endl;
    cout<<obj2.getBChild()<<endl;
    obj2.setBChild(17);
    cout<<obj2.getBChild()<<endl;
    cout<<obj.c<<endl;
    obj.c=19;
    cout<<obj.c<<endl;
    cout<<obj.getC()<<endl;
    obj.setC(25);
    cout<<obj.getC()<<endl;


    return 0;
}