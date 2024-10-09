#include<iostream>
#include<stdexcept>
#include<string>

using namespace std;

class myException1 {
    public:
        myException1() {
            cout<<"Constructor1"<<endl;
        }
        ~myException1() {
            cout<<"Destructor1"<<endl;
        }

};
class myException2:public myException1 {
    public:
        myException2() {
            cout<<"Constructor2"<<endl;
        }
        ~myException2() {
            cout<<"Destructor2"<<endl;
        }

};

class tanay {
    private:
        int num;
    public:
        tanay(int x) {
            try {
                if(x==0) throw "Not Allowed";
                num = x;
                show();
            } catch(const char* s) {
                cout<<s<<endl;
            }
        }
        void show() {
            cout<<num<<endl;
        }
};

int main() {
    // simple example
    // try {
    //     cout<<"Before"<<endl;
    //     throw myException1();
    // } catch(myException1 myex1) {
    //     cout<<"Exception Called"<<endl;
    //     cout<<"qw"<<endl;
    // }

    // 2 class
    // try {
    //     int x;
    //     cin>>x;

    //     if(x==1) throw myException1();
    //     if(x==2) throw myException2();
    //     cout<<"No Exception"<<endl;
    // } catch (myException2 e2) {
    //     cout << "My Exception 2" << endl;
    // } catch (myException1 e1) {
    //     cout<<"My Exception 1"<<endl;
    // }
    // try {
    //     int x;
    //     cin>>x;

    //     if(x==1) throw myException1();
    //     if(x==2) throw myException2();
    //     cout<<"No Exception"<<endl;
    // } catch (myException1 e1) {
    //     cout<<"My Exception 1"<<endl;
    // } catch (myException2 e2) {
    //     cout << "My Exception 2" << endl;
    // }

    // exception handling inside class
    tanay(0);
    tanay(1);
    // tanay t1 = tanay(0);
    // tanay t2 = tanay(1);
    // t2.show();

    return 0;
}