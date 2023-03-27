#include<iostream>
#include<conio.h>
using namespace std;

class Person
{
public: 
    //void display()
    virtual void display() // virtual function is used so that everyone can access

{
    cout << "I am a Person" << endl;
}
};

class Student : public Person{

public:
    void display()
    {
     cout << "I am a Student" << endl;
    }
};


class Teacher : public Person{

public:
    void display()
    {
     cout << "I am a Teacher" << endl;
    }
};

int main()
{   
    //using pointer variable
    Person *p;
    Teacher t;
    Student s;
   // Person p;
    //p.display();
  //  s.display();
   // t.display();
    
    // assigning onj
    p = &s; // this is indicating student class
    p -> display();

    p = &t; // this is indicating teacher class
    p -> display();

    getch();
}