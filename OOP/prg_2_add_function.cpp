// Adding function to a class.

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
};
int main()
{
    Student Alim, Suparna;

    Alim.id = 101;
    Alim.gpa = 3.44;
    Alim.display();


    Suparna.id = 102;
    Suparna.gpa = 3.22;
    Suparna.display();


    getch();
}