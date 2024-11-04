#include <iostream>

using namespace std;

enum tanay
{
    height = 189,
    weight = 108
};
enum sachin
{
    height = 180, // cannot have same name
    weight = 88 // cannot have same name
};

int main()
{
    enum tanay h;
    enum tanay w;
    h = height;
    w = weight;
    cout << h << endl
         << w << endl;
    return 0;
}