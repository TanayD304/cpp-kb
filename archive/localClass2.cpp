#include <iostream>

using namespace std;

void func()
{
    class local
    {
        public:
            void method() {cout<<1<<endl;} // ok
            void method2();
    };
    // void local::method2() { cout << 2 << endl; } // nok
    local l;
    local *l1;
    // fine
}

int main()
{
    return 0;
}