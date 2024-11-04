#include<iostream>

using namespace std;

class Person {
    private:
        string name;
        int age;

        void setDetails(string name, int age) {
            this->name = name;
            this->age = age;
        }

        pair<string, int> getDetails() {
            return {name, age};
        }

    public:
        void greet(string name, int age) {
            setDetails(name, age);
            cout<<"Hello"<<endl;
            auto var = getDetails();
            cout<<var.first<<endl;
            cout<<var.second<<endl;
        }
};

int main() {
    Person p1;
    string name;
    int age;
    cin>>name;
    cin>>age;
    p1.greet(name, age);
    return 0;
}