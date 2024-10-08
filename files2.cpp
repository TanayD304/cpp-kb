#include<fstream>
#include<iostream>

using namespace std;

int main() {
    ifstream fin; // object
    string line;
    fin.open("file1.txt");
    while(getline(fin, line)) {
        cout<<line<<endl;
    }
    return 0;
}