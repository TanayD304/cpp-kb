#include <iostream>

using namespace std;

class a
{
    public:
    int x;
};

class c:public a {
    public:
    int y;
};

struct b
{
    int x;
};

struct d : b
{
    int y;
};

int main()
{
    c o1;
    d o2;

    o1.x = 1;
    o1.y = 2;

    o2.x = 1;
    o2.y = 2;
    return 0;
}