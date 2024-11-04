#include<iostream>

using namespace std;

class a {
    int x;
};

struct b {
    int x;
};

int main() {
    a o1;
    b o2;

    // o1.x=10; // will give error
    o2.x = 20;
    return 0;
}