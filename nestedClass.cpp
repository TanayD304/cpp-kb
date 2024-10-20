#include<iostream>

using namespace std;

class enclosing {
    private:
        int x=10;
    public:
        class nested {
            private:
                int y=15;
            public:
                void showEnclosing(enclosing& e) {
                    cout<<e.x<<endl; // will not give error
                }
        };
        void showNested(nested& n) {
            cout<<n.y<<endl; // will give error
        }

};

int main() {

}