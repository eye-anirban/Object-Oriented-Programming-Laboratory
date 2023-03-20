/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<math.h>
#include<iostream>
using namespace std;

float area(int r)
{
return (3.14*r*r);
}
 
float area(int a,int b, int c)
{
    float p=a+b+c,s;
    s=p/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

float area(int length, int width)
{ 
   return length*width;
   
}  

int main()
{
int rad,a,b,c,length,width,ch;
cout<<"Area of which shape do you want?\n1.Circle\n2.Triangle\n3.Rectangle\nEnter your choice:\n";
cin>>ch;

switch (ch)
    {   case 1 : cout<< "Enter Radius of Circle\n";
                cin>>rad;
                cout<<"Area of Circle is "<<area(rad)<<endl;
                break;
       case 2 : cout<< "Enter sides of triangle\n";
                cin>>a>>b>>c;
                cout<<"Area of the triangle is "<<area(a,b,c)<<endl;
                break;
       case 3 : cout<< "Enter length and width of Rectangle\n";
                cin>>length>>width;
                cout<<"Area of rectangle is "<<area(length,width);
                break;
       default: cout<<"Wrong input"<<endl;
    }
}
