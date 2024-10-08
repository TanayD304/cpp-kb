#include<fstream>
#include<iostream>
#include<string>

using namespace std;

int main() {
    ofstream fout; // object of class

    string line; // a string

    fout.open("file1.txt"); // file to write something

    while(fout) {
        getline(cin, line); // take input
        if(line=="-1") break;
        fout<<line<<endl;
    }

    fout.close();

    return 0;

}