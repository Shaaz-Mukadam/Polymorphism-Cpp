//***************POLYMORPHISM*****************
//Poly means many morphism means form it means many forms.
//Polymorphism is compile time and run time compile time is divided into two types 1. Function overloading 2. Operator overloading
// Run time is divided in to virtual functions.
//Function overloading means more than one function is present with same name but different parameter . same as for operator overloading.

#include<iostream>
using namespace std;
class ABC {
 public:
     void fun() {
     cout<<"Hello this is function one with no argumnets"<<endl;
     }
     void fun(int x) {
     cout<<"Hello this is function second with parameters";
     }
};
int main() {
    ABC a1;
    a1.fun();
    a1.fun(4);

    return 0;
}
