/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class test2;
class test1
{
	private:
	int a;
	public:
	void display();
	void swap(test2 &);
	friend void input(test1 &, test2 &);
};
class test2
{
	private:
	int a;
	public:
	void display();
	friend void test1::swap(test2 &);
	friend void input(test1 &, test2 &);
};
void  test1::display()
{
	cout<<"Variable in Class 1 : "<<a<<endl;
}
void  test2::display()
{
	cout<<"Variable in Class 2 : "<<a<<endl;
}
void input(test1 &t1, test2 &t2)
{
	cin>>t1.a>>t2.a;
}
void test1::swap(test2 &t1)
{
	int temp= t1.a;
	t1.a=this->a;
	this->a=temp;
}
int main()
{
	test1 t1;
	test2 t2;
	cout<<"Enter Data"<<endl;
	input(t1,t2);
	t1.display();
	t2.display();
	cout<<"After Swap"<<endl;
	t1.swap(t2);
	t1.display();
	t2.display();
}