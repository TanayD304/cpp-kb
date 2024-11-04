#include<iostream>

using namespace std;

class myClass {
    private:
        int a;
    public:
        myClass() {
            cout<<"Constructor"<<endl;
        }

        ~myClass() {
            cout<<"Destructor"<<endl;
        }
};

int main() {
    myClass o1;
    return 0;
}