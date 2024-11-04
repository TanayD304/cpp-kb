#include<iostream>

using namespace std;

class box {
    private:
        int l;
        int b;
        int h;
        int *n;

    public:
        void setter(int l, int b, int h, int a) {
            this->l = l;
            this->b = b;
            this->h = h;
            *n = a;
        }

        void getter() {
            cout<<l<<endl<<b<<endl<<h<<endl<<*n<<endl;
            cout<<&l<<endl<<&b<<endl<<&h<<endl<<n<<endl<<endl;
        }
};

int main() {
    box b1;
    int l,b,h,n;
    cin>>l>>b>>h>>n;
    b1.setter(l,b,h,n);
    b1.getter();
    box b2 = b1;
    b2.getter();
    box b3;
    b3 = b1;
    b3.getter();
    return 0;
}