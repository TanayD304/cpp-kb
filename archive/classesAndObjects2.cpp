#include<iostream>

using namespace std;

class base {
    private:
        int a;
    protected:
        int b;
    public:
        int c;

        void setA(int a) {
            this->a = a;
        }
        void setB(int b) {
            this->b = b;
        }
        void setC(int c) {
            this->c = c;
        }

        int getA() {
            return a;
        }
        int getB() {
            return b;
        }
        int getC() {
            return c;
        }
};

class derived: public base {
    public:
        void setBDerived(int b) {
            this->b = b;
        }

        int getBDerived() {
            return b;
        }
};

int main() {
    base obj1;
    derived obj2;

    int a,b,c;
    cin>>a>>b>>c;

    //private
    // obj1.a=a; // will give error
    obj1.setA(a);
    cout<<obj1.getA()<<endl;

    // protected
    // obj1.b = b; // will give error
    obj1.setB(b);
    cout<<obj1.getB()<<endl;

    // public
    obj1.c=10; // will not give error
    cout << obj1.c << endl; // will not give error
    obj1.setC(c);
    cout<<obj1.getC()<<endl;

    obj2.setBDerived(b);
    cout<<obj2.getBDerived()<<endl;
    return 0;
}