#include<iostream>

using namespace std;

class myClass {
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        int getA() { return this->a;}
        int getB() { return this->b;}
        int getC() { return this->c;}
        void setA(int a) { this->a = a;}
        void setB(int b) { this->b = b;}
        void setC(int c) { this->c = c;}
};

class myDerivedClass:public myClass {
    public:
        int getBDerived() { return b;}
        void setBDerived(int b) { this->b = b;}
};

int main() {
    myClass myObj;

    int a, b, c;
    cin>>a>>b>>c;

    // myObj.a = a; // private declared not allowed
    myObj.setA(a);
    cout<<myObj.getA()<<endl;
    // myObj.b = b; // protected declared not allowed
    myObj.setB(b);
    cout<<myObj.getB()<<endl;

    myObj.c = 10;
    cout<<myObj.c<<endl;
    myObj.setC(c);
    cout<<myObj.getC()<<endl;

    myDerivedClass myDerivedObj;

    myDerivedObj.setB(b);
    cout << myDerivedObj.getB() << endl;

    return 0;
}