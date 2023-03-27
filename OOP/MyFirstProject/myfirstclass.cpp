#include "myfirstclass.h"
#include<iostream>
using namespace std;
// scope resolution operator. It indicate to class members.

MyFirstClass::MyFirstClass()
{
    cout << "Inside the constructor" << endl;

}
MyFirstClass :: ~ MyFirstClass()
{
    cout << "Destructor is called";
}


void MyFirstClass ::display()
{
cout << "Inside the Display function" << endl;

}
