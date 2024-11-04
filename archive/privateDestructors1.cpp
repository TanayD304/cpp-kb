#include<iostream>

using namespace std;

class myClass {
    ~myClass() { cout << "Destructor"; }
};

int main() {
    return 0;
}

// will not give error as we are not creating an object thus its allowed to have a destrutor private