/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
 
class complex
{ 
    int real , img;
 
public:
    complex()
    {
        real=0;
        img=0;
    }
     
    complex(int r, int i)
    {
        real=r;
        img=i;
    }
    
    complex(const complex &c1)
    {
        real = c1.real; 
        img = c1.img;
    }
    
    void disp()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    
    ~complex()
    {cout<<"\nDestructor is invoked\n";}
    
};
 
int main()
{    
    int x,y;
    complex c1;
    cout<<"Enter real and imaginary parts\n";
    cin>>x>>y;
    complex c2(x,y);
    complex c3=c2;
    
    cout<<"\nUse of default constructor:";
    c1.disp();
    cout<<"\nUse of parameterized constructor:" ;
    c2.disp();
    cout<<"\nUse of copy constructor:" ;
    c3.disp();
    return 0;
}