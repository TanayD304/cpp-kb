#include<iostream>

using namespace std;

class a{

};

class b{
    public:
        b() {cout<<"Constructor b"<<endl;}
};

class c : public b {

};

class d : public b {
    public:
        d() {cout<<"Constructor d"<<endl;}
};

class e {
    b o1;
    public:
        e() { cout << "Constructor e" << endl; }
};

int main() {
    a o1;
    b o2;
    c o3;
    d o4;
    e o5;
    return 0;
}