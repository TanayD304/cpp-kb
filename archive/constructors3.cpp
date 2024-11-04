// TODO: Pending implemetation
#include<iostream>

using namespace std;

class MyClass{
    private:
        int *data;

    public:
        MyClass(int a) {
            *data = a;
        }

        MyClass(MyClass&& o1) {
            data = o1.data;
            o1.data = nullptr;
            cout<<"Move Constructor"<<endl;
        }


};

int main() {
    MyClass o1(10);
    MyClass o2 = move(o1);
    return 0;
}