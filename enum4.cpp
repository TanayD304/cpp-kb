#include <iostream>

using namespace std;

enum tanay
{
    height,
    weight
};
enum dubey
{
    height1,
    weight1
};

int main()
{
    enum tanay h=height;
    enum dubey w=weight1;

    if(height==weight1) cout<<"Not Type safe"<<endl;

    return 0;
}