#include<iostream>

using namespace std;

enum class enumName {
    red,
    blue,
    green
};
enum class enumName1 {
    red,
    blue,
    green
};

int main() {
    int green = 10;
    enumName1 q = enumName1::red;
    enumName w = enumName::blue;

    if(q==w) cout<<1;
    else cout<<1;
    return 0;
}