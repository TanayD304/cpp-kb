#include<iostream>

using namespace std;

class myClass {
    private:
        int a;
        string b;
        bool c;
    public:
        myClass(int a, string b, bool c) : a(a), b(b), c(c){
            cout<< "Parameterised list" <<endl;
        }

        void print()
        {
            cout << a << " " << b << " " << c << endl;
        }
};

int main() {
    myClass o1(1, "Tanay", true);
    o1.print();
    return 0;
}