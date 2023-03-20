/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class dist
{
	double feet;
	double inches;
	public:
		void getinfo()
		{
			cout<<"Enter Feet and Inches: ";
			cin>>feet>>inches;
			}
		void display()
		{
			cout<<feet<<"'"<<inches<<"''"<<endl;
			
			}	
		void add(dist a, dist b)
		{
			inches=a.inches+b.inches;
			feet=a.feet+b.feet;
		}
		dist add(dist b)
		{
			dist temp;
			temp.inches=inches+b.inches;
			temp.feet=feet+b.feet;
			return temp;
		}
};


int main()
{
	dist c1,c2,c3,c4;
	
	c1.getinfo();
	c2.getinfo();
	
	cout<<"Distance 1: ";
	c1.display();
	cout<<"Distance 2: ";
	c2.display();
	c3.add(c1,c2);
	
	cout<<"Result for c3.add(c1,c2): "<<endl;
	c3.display();
	c4=c1.add(c2);
	cout<<"Result for c4=c1.add(c2): "<<endl;
	c4.display();
	
	return 0;
}

