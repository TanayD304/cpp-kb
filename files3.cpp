#include<iostream>
#include<fstream>

using namespace std;

int main() {
    fstream fio;
    string line;

    fio.open("file1.txt", ios::in);
    while(getline(fio, line)) {
        cout<<line<<endl;
    }
    fio.close();

    fio.open("file1.txt", ios::trunc);
    fio.close();

    fio.open("file1.txt", ios::out);
    while(fio) {
        getline(cin, line);

        if(line=="-1") break;

        fio<<line<<endl;
    }
    fio.close();

    fio.open("file1.txt", ios::in);
    while(getline(fio, line)) {
        cout<<line<<endl;
    }
    fio.close();
    return 0;
}