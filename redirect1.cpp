#include<fstream>
#include<iostream>

using namespace std;

int main() {
    // fout to cout
    fstream fout;
    fout.open("redirect1.txt", ios::out);
    streambuf* buf_cout = cout.rdbuf();

    streambuf* buf_fout = fout.rdbuf();
    cout.rdbuf(buf_fout);

    cout<<"Text in line1"<<endl;
    cout<<"Text in line1"<<endl;
    cout<<"Text in line1"<<endl;
    cout<<"Text in line1"<<endl;
    cout<<"Text in line1"<<endl;

    cout.rdbuf(buf_cout);

    fout.close();

    // fin to cin

    fstream fin;
    fin.open("redirect1.txt", ios::in);
    streambuf* buf_cin = cin.rdbuf();
    streambuf* buf_fin = fin.rdbuf();

    cin.rdbuf(buf_fin);
    string line;
    while(getline(cin, line)) cout<<line<<endl;
    cout.rdbuf(buf_cin);
    return 0;


    return 0;
}