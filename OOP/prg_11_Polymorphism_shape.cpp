#include<iostream>
#include<conio.h>
using namespace std;

class Shape
{
public:
  double dim1, dim2;

// constructor
  Shape (double dim1, double dim2)
  {
    this -> dim1 = dim1;
    this -> dim2 = dim2;
  }

// function
 virtual double area()
  {
    return 0;
  }
};

//triangle class inherited the shape class
class Triangle : public Shape
{
    // dim1, dim2, area()
public:
    Triangle(double dim1, double dim2)
    // rather than writing this we called superclass constructor
    : Shape (dim1,dim2)
    {
       // we don't have to use this here as we already initialized values of dim1, dim2
    }
    double area()
    {
        return 0.5 * dim1 * dim2;
    }
};


class Rectangle : public Shape
{
    // dim1, dim2, area()
public:
    Rectangle(double dim1, double dim2)
    : Shape (dim1,dim2)
    {
       // we don't have to use this here as we already initialized values of dim1, dim2
    }
    double area()
    {
        return dim1 * dim2;
    }
};


int main()
{   
    // we can put superclass variables in subclass
    Shape *p;
    Triangle t(10,20);
    Rectangle r(10,20);

    p = &t;
    cout << "Triangle Area = " <<p -> area() << endl;

    p = &r;
    cout << "Rectangle Area = " <<p -> area() << endl;
    
    getch();
}