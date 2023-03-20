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
        cout << "Constructor of Grandparent Class A Called " << endl;
    }
    ~A()
    {
        cout << "Destructor of Grandparent Class A Called " << endl;
    }
};
class B : public A
{
    protected:
    int b;
    public:
    B()
    {
        cout << "Constructor of Parent Class B Called " << endl;
    }
    ~B()
    {
        cout << "Destructor of Parent Class B Called " << endl;
    }
};
class D : public B
{
    protected:
    int d;
    public:
    D()
    {
        cout << "Constructor of Child Class D Called " << endl;
    }
    ~D()
    {
        cout << "Destructor of Child Class D Called " << endl;
    }
};

int main()
{
    cout << "Multilevel : \n" << endl;
    D obj;
    return 0;
}
