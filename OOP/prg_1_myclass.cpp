#include<iostream>
#include<conio.h>
using namespace std;

class Student
{   public:
        int id;
        double gpa;
};
int main()
{
    Student Alim, Suparna;

    Alim.id = 101;
    Alim.gpa = 3.44;

    cout << Alim.id << " " << Alim.gpa << endl;

    Suparna.id = 102;
    Suparna.gpa = 3.22;

    cout << Suparna.id << " " << Suparna.gpa << endl;


    getch();
}