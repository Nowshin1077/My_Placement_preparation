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

        void setValue(int x, double y)
        {
            id = x;
            gpa = y;
        }
};
int main()
{
    Student Alim, Suparna;
    Alim.setValue(101,3.44);
    Alim.display();

    Suparna.setValue(102,3.22);
    Suparna.display();


    getch();
}