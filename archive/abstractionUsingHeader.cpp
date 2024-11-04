#include "abstractionUsingHeaderFile.cpp"
#include<iostream>

using namespace std;

int main() {
    Person p1;
    string name;
    int age;
    cin >> name;
    cin >> age;
    p1.greet(name, age);
    return 0;
}