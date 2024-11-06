/*
#######################################NOTES#######################################
Components of functions
- Name - how it is called
- Parameter List - input/list of inputs can be nothing as well
- Return type - data type of returning object can be nothing as well
- body - logic can be nothing as well

When a func calls another func the compiler must know about the called func before
*/
#include <iostream>
#include <string>

using namespace std;

int func_1()
{
    return 0;
}

int func_2(int a)
{
    return a;
}

void func_3(int a)
{
    cout << a << endl;
}

void func_4() {}

void func_5(int a, int b, string c)
{
    cout << c << endl;
    cout << a << endl;
    cout << b << endl;
}

void func_6() { cout << "Hello" << endl; }

void say_hello()
{
    cout << "Hello" << endl;
}

void say_world()
{
    say_hello();
    cout << "World" << endl;
}

void m2()
{
    cout << "Start of m2" << endl;
    cout << "World" << endl;
    cout << "Bye from m2" << endl;
}

void m1()
{
    cout << "Start of m1" << endl;
    cout << "Hello" << endl;
    m2();
    cout << "Bye from m1" << endl;
}

float area_of_circle(int r)
{
    return 3.14 * r * r;
}

float volume_of_cylinder(int r, int h)
{
    return area_of_circle(r) * h;
}

int main()
{
    cout << func_1() << endl;
    cout << func_2(1) << endl;
    func_3(2);
    func_4();
    func_5(4, 5, "Tanay");
    func_6();

    say_world();
    cout << "start of main" << endl;
    m1();
    cout << "end of main" << endl;

    cout << area_of_circle(3) << endl;
    cout << volume_of_cylinder(3, 4) << endl;

    return 0;
}