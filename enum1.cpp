#include<iostream>

using namespace std;

enum tanay {
    height = 189,
    weight = 108
};

int main() {
    enum tanay h;
    enum tanay w;
    h=height;
    w=weight;
    cout<<h<<endl<<w<<endl;
    return 0;
}