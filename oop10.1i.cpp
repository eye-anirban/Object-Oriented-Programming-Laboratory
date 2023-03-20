/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
class data
{
	int a;
	int b;
	public:
	void input()
	{
		cin>>a>>b;
	}
	void output()
	{
		cout<<a<<"\t"<<b;
	}
	friend data operator+(data d1,data d2)
	{
		data d3;
		d3.a=d2.a+d1.a;
		d3.b=d2.b+d1.b;
		return d3;
	}
	friend data operator-(data d1,data d2)
	{
		data d3;
		d3.a=d1.a-d2.a;
		d3.b=d1.b-d2.b;
		return d3;
	}
	friend data operator*(data d1,data d2)
	{
		data d3;
		d3.a=d2.a*d1.a;
		d3.b=d2.b*d1.b;
		return d3;
	} 
	friend data operator/(data d1,data d2)
	{
		data d3;
		d3.a=d1.a/d2.a;
		d3.b=d1.b/d2.b;
		return d3;
	}
};

int main()
{
	data d1,d2,sum,diff,pro,div;
	cout<<"Enter 2 integers for 1st object: ";
	d1.input();
	cout<<"Enter 2 integers for 2nd object: ";
	d2.input();
	sum=d1+d2;
	diff=d1-d2;
	pro=d1*d2;
	div=d1/d2;
	cout<<"\nSum of the 2 objects: ";
	sum.output();
	cout<<"\nDifference of the 2 objects: ";
	diff.output();
	cout<<"\nProduct of the 2 objects: ";
	pro.output();
	cout<<"\nDivision of the 2 objects: ";
	div.output();
	return 0;
}