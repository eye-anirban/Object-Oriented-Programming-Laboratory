/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

class test
{
	int x;
	public:
		void input()
		{
			cin>>x;
		}
	    void display()
	    {
	    	cout<<x;
		}
	    void swap(test &T)
	    {
	    	int t;
	    	t=x;
	    	x=T.x;
	    	T.x=t;
	    }
};

int main()
{
	test T1,T2;
	cout<<"\nEnter 1st Number:";
	T1.input();
	cout<<"\nEnter 2nd Number:";
	T2.input();
	T1.swap(T2);
	cout<<"\nNow 1st Number is:";
	T1.display();
	cout<<"\nNow 2nd Number is:";
	T2.display();
	
	return 0;
}
