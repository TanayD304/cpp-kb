#include<iostream>
#include<stdexcept>

using namespace std;

int main() {
    try {
        int a;
        cin>>a;

        if(a<0) throw "Tanay";
        if(a==2) throw true;
        if(a==3) throw 'a';
        if(a==0) throw a;
        cout<<"After Throw"<<endl;
    } catch(int a) {
        cout<<"Integer could not be zero"<<endl;
    } catch(...) {
        cout<<"default exception"<<endl;
    }

    cout<<"After Catch block"<<endl;
    return 0;
}