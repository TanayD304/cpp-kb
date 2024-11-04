#include<iostream>

using namespace std;

void func() {
    class local {

    };
    local l;
    local* l1;
    //fine
}

int main() {
    // local l;
    // local* l1;
    // not fine
    return 0;
}