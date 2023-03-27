// Adding parametrized function to the class.

#include<iostream>
#include<conio.h>
using namespace std;

class Student
{   public:
        int id;
        double gpa;

        void display()
        {
                cout << id << " " << gpa << endl;

        }

//parameterized constructor
        Student(int x, double y)
        {
          id = x;
          gpa = y;
        }

//default constructor
        Student()
        {
            cout << "Default Constructor" << endl;
        }

       
};
int main()
{   
    Student ob;

    Student Alim(101,3.44);
    Alim.display();

    Student Suparna(102,3.22);
    Suparna.display();


    getch();
}