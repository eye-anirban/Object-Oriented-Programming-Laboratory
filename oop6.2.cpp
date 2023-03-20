/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>

using namespace std;

class timer
{
	int hh;
	int mm;
	public:
	timer()
	{
		hh=0;
		mm=0;
	}
	timer(int a,int b=0)
	{
		hh=a;
		mm=b;
	}
	timer(timer &t)
	{
		hh=t.hh;
		mm=t.mm;
	}
	void input()
	{
		cin>>hh>>mm;
	}
	void display()
	{
		cout<<hh<<" hrs and "<<mm<<" mins";
	}
	~timer()
	{
		cout<<"\nDestructor is invoked";
	}
};

int main()
{
	timer t1,t2;
	timer t3(5);
	timer t4(5,34);
	timer t5=t3;
	cout<<"Enter the hours and mins of one variable = ";
	t2.input();
	cout<<"\nT1 = ";
	t1.display();
	cout<<"\nT2 = ";
	t2.display();
	cout<<"\nT3 = ";
	t3.display();
	cout<<"\nT4 = ";
	t4.display();
	cout<<"\nT5 = ";
	t5.display();
	
}