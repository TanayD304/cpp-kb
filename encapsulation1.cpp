#include<iostream>

using namespace std;

class Half {
    private:
        int a;
        int b;
    public:
        int solve(int input) {
            a = input;
            b = input/2;
            return b;
        }
};

int main() {
    int n;
    cin>>n;
    Half obj;
    int ans = obj.solve(n);
    // int ans = solve(n); // trying to access without obj - error
    // cout<<ans<<endl;

    
    return 0;
}