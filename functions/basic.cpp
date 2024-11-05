/*
#######################################NOTES#######################################
What is function
- Modularisation of a program
- Seperate codes into self contained logical units
- provides reusability
- helps achieve abstraction

What function provides
- Modularity
- Reusability
- Scalability
- Maintainability

How to use functions
- Understand what function does - logic
- Understand when to use them - when logic is required
- Understand where to use them - where logic is required
- Understand what info to provide them - args
- Understand what info they will provide - return
*/

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>

using namespace std;

int add_numbers(int a, int b) {
    return a+b;
}

int add_numbers_non_negative(int a, int b) {
    if(a<0 || b<0) return 0;
    return a+b;
}

int main() {
    // Pre defined
    cout<<sqrt(400.00)<<endl;
    cout<<cbrt(8.00)<<endl;
    cout<<pow(2,4)<<endl;
    cout<<sin(1)<<endl;
    cout<<cos(1)<<endl;
    cout << (cos(1) * cos(1)) + (sin(1) * sin(1)) << endl;
    cout<<ceil(2.8)<<endl;
    cout<<floor(2.8)<<endl;
    cout<<round(123.5)<<endl;
    cout<<round(124.5)<<endl;

    int mini = 1;
    int maxi = 6;
    // seed psuedo rand number
    srand(time(nullptr));
    cout<<"#Dice"<<endl;
    for(int i=0;i<10;i++) {
        cout<<rand()%maxi + mini<<endl;
    }
    cout<<"#Dice"<<endl;


    // user defined
    cout<<add_numbers(2,3)<<endl;

    cout<<add_numbers_non_negative(2,3)<<endl;
    cout<<add_numbers_non_negative(2,-3)<<endl;
    cout<<add_numbers_non_negative(-2,3)<<endl;
    cout<<add_numbers_non_negative(-2,-3)<<endl;
    return 0;
}
