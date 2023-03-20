/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

float vol (float r)			//sphere
{
  return (4 * 3.14 * r * r * r) / 3;
}

float vol (float r, float h)		//Cylinder
{
  return (3.14 * r * r * h);
}

float vol (float l, float b, float h)	//Cuboid
{
  return (l * b * h);
}


int main ()
{
  float r, l, b, h, t;
  cout << "Enter the Radius of Sphere:" << endl;
  cin >> r;
  cout << "Volume of Sphere :" << vol (r) << endl;
  
  cout << "Enter the Radius & Height of Cylinder: " << endl;
  cin >> r >> h;
  cout << "Volume of Cylinder: " << vol (r, h) << endl;
  
  cout << "Enter the Length,Breadth & Height of Cuboid: " << endl;
  cin >> l >> b >> h;
  cout << "Volume of Cuboid: " << vol (l, b, h) << endl;

}
