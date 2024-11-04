#include<iostream>
#include<stdexcept>

using namespace std;

// bad practice
void func(int* ptr, int var) {
    if(ptr==nullptr) throw ptr;
    if(var==0) throw var;

    return;
}

// recommended practice
void func1(int* ptr, int var) throw(int*, int) {
    if (ptr == nullptr)
        throw ptr;
    if (var == 0)
        throw var;

    return;
}

class test {
    public:
        int a=0;
        test() {
            cout<<"Constructor"<<endl;
        }

        ~test() {
            cout<<"Destructor"<<endl;
        }
};

int main() {
    // prop1 catch all

    // prop2
    // try {
    //     throw 10;
    // } catch(char a) {
    //     cout<<"exception"<<endl;
    // }

    // prop3
    // try {
    //     throw 10;
    // } catch(char a) {
    //     cout<<"exception"<<endl;
    // }
    // cout<<"Hi"<<endl;

    //prop4
    // try {
    //     func(nullptr, 0);
    // } catch(...) {
    //     cout<<"Exception"<<endl;
    // }
    // try {
    //     func1(nullptr, 0);
    // } catch(...) {
    //     cout<<"Exception"<<endl;
    // }

    //prop5
    // try {
    //     try {
    //         throw 20;
    //     } catch (int n) {
    //         cout<<"Part1"<<endl;
    //         throw;
    //     }
    // } catch(int n) {
    //     cout<<"Part2"<<endl;
    // }

    //prop6
    try {
        test t1;
        if(t1.a==1) throw 20;
        cout<<"After throw"<<endl;
    } catch(...) {
        cout<<"exception"<<endl;
    }
    return 0;
}