/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
class complex
{
	float real;
	float img;
	public:
		void getdata()
		{
			cin>>real>>img;
		}
		void putdata()
		{
			cout<<real<<"+"<<img<<"i";
		}
		complex operator+(complex c)
		{
			complex c1;
			c1.real=real+c.real;
			c1.img=img+c.img;
			return c1;
		}
		complex operator-(complex c)
		{
			complex c1;
			c1.real=real-c.real;
			c1.img=img-c.img;
			return c1;
		}
		complex operator*(complex c1)
		{
			complex c3;
			float a,b,c,d;
			a=real*c1.real;
			b=real*c1.img;
			c=img*c1.real;
			d=img*c1.img;
			c3.real=a-d;
			c3.img=b+c;
			return c3;
		}
};

int main()
{
	complex c1,c2,sum,diff,pro;
	cout<<"Enter the real and imaginary part of 1st complex number\n";
	c1.getdata();
	cout<<"Enter the real and imaginary part of 2nd complex number\n";
	c2.getdata();
	sum=c1+c2;
	diff=c1-c2;
	pro=c1*c2;
	//Displaying sum
	cout<<"\n";
	c1.putdata();
	cout<<" + ";
	c2.putdata();
	cout<<" = ";
	sum.putdata();
	//Displaying Difference
	cout<<"\n";
	c1.putdata();
	cout<<" - ";
	c2.putdata();
	cout<<" = ";
	diff.putdata();
	//Displaying Product
	cout<<"\n";
	c1.putdata();
	cout<<" * ";
	c2.putdata();
	cout<<" = ";
	pro.putdata();
	return 0;
}
