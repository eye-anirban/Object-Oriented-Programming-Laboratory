/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

class A
{
    protected:
    int a;
    public:
    A()
    {
        cout << "Constructor of Base Class A Called " << endl;
    }
    ~A()
    {
        cout << "Destructor of Base Class A Called " << endl;
    }

};

class A1
{
    protected:
    int a1;
    public:
    A1()
    {
        cout << "Constructor of Base Class A1 Called " << endl;
    }
    ~A1()
    {
        cout << "Destructor of Base Class A1 Called " << endl;
    }

};

class E : public A, public A1
{
    protected:
    int e;
    public:
    E()
    {
        cout << "Constructor of Derived Class E Called " << endl;
    }
    ~E()
    {
        cout << "Destructor of Derived Class E Called " << endl;
    }

};

int main()
{
    cout << "Multiple Inheritance : \n" << endl;
    E obj;
    return 0;
}

