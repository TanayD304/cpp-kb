#include<iostream>

using namespace std;

class Sum {
    private:
        int x;
        int y;
    public:
        void add() {
            cin>>x>>y;
            cout<<x+y<<endl;
        }
};

int main() {
    Sum s;
    s.add();
    return 0;
}