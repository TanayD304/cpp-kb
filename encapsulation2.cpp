#include<iostream>

using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        void setName(string newName) {
            this->name = newName;
        }

        void setAge(int newAge) {
            this->age = newAge;
        }

        string getName() {
            return this->name;
        }

        int getAge() {
            return this->age;
        }
};

int main() {
    Person p1("Tanay", 24);

    // cout<<p1.name<<endl;     // private not allowed
    cout<<p1.getName()<<endl;
    cout<<p1.getAge()<<endl;

    // p1.name = "Tanay Dubey"; // private not allowed
    // p1.age = 25;             // private not allowed
    p1.setName("Tanay Dubey");
    p1.setAge(25);
    cout<<p1.getName()<<endl;
    cout<<p1.getAge()<<endl;
    return 0;
}