#include<iostream>
#include<conio.h>
using namespace std;

class MobileUser
{
public: 
    void call()
    {
        cout << "Hello!" << endl;
    }
    virtual void sendMessage() = 0;
    // we have to use this function must as it is pure virtual function

};

class Rahim : public MobileUser
{
public:
    void sendMessage()
    {
        cout << "Hi, This is Rahim" << endl;
    }
};

class Karim : public MobileUser
{
public:
    void sendMessage()
    {
        cout << "Hi, This is Karim" << endl;
    }
};


int main()
{   
    // MobileUser m;
    // We can't create obj for this class. We can create pointer though.

    MobileUser *m;

    Rahim r;
    Karim k;

    m = &r;
    m -> call();
    m -> sendMessage();


    m = &k;
    m -> sendMessage();
    
    getch();
}