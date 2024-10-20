#include<iostream>

using namespace std;

void func() {
    class local {
        public:
            // static int a; // nok
            static void tanay(){cout<<1<<endl;} // ok
    };
}

int main() {
    return 0;
}