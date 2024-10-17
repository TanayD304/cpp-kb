#include<iostream>

using namespace std;

class myClass; // forward declaration

class myOtherFriendClass {
    public:
        void tripleIt(myClass& obj1);
};

class myClass {
    private:
        int a;
    protected:
        int b;

    friend class myFriendClass; // access specifier doesnt matter
    friend void doubleIt(myClass& obj1); // global function
    friend void myOtherFriendClass::tripleIt(myClass &obj1);
};

void doubleIt(myClass& obj1) {
    cout<<obj1.a*2<<endl<<obj1.b*2<<endl;
}

void myOtherFriendClass::tripleIt(myClass& obj1) {
    cout<<obj1.a*3<<endl<<obj1.b*3<<endl;
}

class myFriendClass {
    public:
        void setter(myClass& obj1, int a, int b) {
            obj1.a = a;
            obj1.b = b;
        }

        void getter(myClass& obj1) {
            cout<<obj1.a<<endl<<obj1.b<<endl;
        }
};

class abc;

class xyz {
    private:
        int x=20;
    public:
        int getMin(xyz &o1, abc &o2);
};

class abc {
    private:
        int x=100;

    public:
        friend int xyz::getMin(xyz &o1, abc &o2);
};

int xyz::getMin(xyz &o1, abc &o2) {
    if(o1.x>o2.x) return o1.x;
    return o2.x;
}

int main()
{
    myClass obj1;
    myFriendClass obj2;
    myOtherFriendClass obj3;
    int a,b;
    cin>>a>>b;
    obj2.setter(obj1, a, b);
    obj2.getter(obj1);
    doubleIt(obj1);
    obj3.tripleIt(obj1);

    xyz o1;
    abc o2;
    cout<<o1.getMin(o1, o2)<<endl;
    return 0;
}