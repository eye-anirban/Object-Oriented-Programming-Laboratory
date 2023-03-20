/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<conio.h>
using namespace std;
class shape
{
        public:
	virtual void area()=0;
};
class circle: public shape
{
   float r;
   public:
    void area()
   {
       cout<<"Enter radius of the Circle : ";
       cin>>r;
       cout<<"\nArea of the Circle : "<<(2.146*r*r);
       cout<<"\n";
   }
};
class triangle: public shape
{

	int h,b;
       float a;
	public:
       void area()
       {
   	    cout<<"\nEnter height of the Triangle : ";
            cin>>h;
            cout<<"\nEnter breadth of the Triangle : ";
            cin>>b;
            a=0.5*h*b;
            cout<<"\nArea of the Triangle : "<<a;
            cout<<"\n";
       }
};
class rectangle: public shape
{
	int l,b;
	public:
   void area()
   {
       cout<<"\nEnter length of the Rectangle : ";
       cin>>l;
       cout<<"\nEnter breadth of the Rectangle : ";
       cin>>b;
       cout<<"\nArea of the Rectangle : "<<l*b;
       cout<<"\n";
   }
};

int main()
{
   circle c;
   c.area();
   triangle t;
   t.area();
   rectangle r;
   r.area();
   getch();
   return(0);
}
