#include<iostream>

using namespace std;

class myClass{
    public:
        void display(int a) {
            cout<<"Your number is "<<a<<endl;
        }
};

int main() {
    myClass myObj;
    int a;
    cin>>a;
    myObj.display(a);
    return 0;
}