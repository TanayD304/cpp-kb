#include<iostream>
#include<stdexcept>

using namespace std;

int main() {
    try {
        int a, b;
        cin>>a>>b;

        if(b==0) {
            throw runtime_error("Division by zero");
        }

        if(b<0) {
            throw runtime_error("Negative divisor not allowed");
        }

        cout<<a/b<<endl;
    }
    catch(const exception& e) {
        cerr << e.what() << endl;
    }

    return 0;
}