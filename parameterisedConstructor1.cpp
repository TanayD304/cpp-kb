#include<iostream>

using namespace std;

class myClass {
    private:
        int a;
        string b;
        bool c;

    public:
        myClass(int a, string b, bool c=true) {
            this->a = a;
            this->b = b;
            this->c = c;
        }

        void print() {
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
};

int main() {
    int a;
    cin>>a;
    string b;
    cin>>b;
    bool c;
    cin>>c;
    myClass o1 = myClass(a,b,c);
    o1.print();
    myClass o2(a,b,c);
    o2.print();
    myClass o3 = myClass(a,b);
    o3.print();
    myClass o4(a,b);
    o4.print();
    return 0;
}