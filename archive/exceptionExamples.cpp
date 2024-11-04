#include<iostream>
#include<stdexcept>

using namespace std;

int main() {
    // throw an integer as a error
    try {
        int x;
        cin>>x;

        if(x<0) {
            throw x;
            cout<<"It will not come here";
        }
        cout<<"No errors"<<endl;
    } catch(int x) {
        cout<<"Integer Exception"<<endl;
    }

    // throw an char as a error
    try {
        char x;
        cin>>x;

        if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
        {
            throw x;
            cout<<"It will not come here";
        }
        cout<<"No errors"<<endl;
    } catch(char x) {
        cout<<"char Exception"<<endl;
    }

    // throw an integer as a error
    try {
        bool x;
        cin>>x;

        if(!x) {
            throw x;
            cout<<"It will not come here";
        }
        cout<<"No errors"<<endl;
    } catch(bool x) {
        cout<<"bool Exception"<<endl;
    }

    // throw an integer as a error
    try {
        string x;
        cin>>x;

        if(x=="exit") {
            throw x;
            cout<<"It will not come here";
        }
        cout<<"No errors"<<endl;
    } catch(string x) {
        cout<<"string Exception"<<endl;
    }
    return 0;
}