#include <iostream>

using namespace std;

class box
{
private:
    int *l;
    int *b;
    int *h;
    int *n;

public:
    box() {
        l = new int;
        b = new int;
        h = new int;
        n = new int;
    }
    box(box& o) {
        l = new int;
        b = new int;
        h = new int;
        n = new int;
        *l = *o.l;
        *b = *o.b;
        *h = *o.h;
        *n = *o.n;
    }

    box operator=(box &o) {
        l = new int;
        b = new int;
        h = new int;
        n = new int;
        *l = *o.l;
        *b = *o.b;
        *h = *o.h;
        *n = *o.n;
    }

    void setter(int le, int be, int he, int ae)
    {
        *l = le;
        *b = be;
        *h = he;
        *n = ae;
    }

    void getter()
    {
        cout << *l << endl
             << *b << endl
             << *h << endl
             << *n << endl;
        cout << l << endl
             << b << endl
             << h << endl
             << n << endl
             << endl;
    }
};

int main()
{
    box b1;
    int l, b, h, n;
    cin >> l >> b >> h >> n;
    b1.setter(l, b, h, n);
    b1.getter();
    box b2 = b1;
    b2.getter();
    box b3;
    b3 = b1;
    b3.getter();
    return 0;
}