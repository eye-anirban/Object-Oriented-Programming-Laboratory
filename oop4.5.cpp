/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<math.h>
using namespace std;
class complex
{
  int real, imag;
public:
  void input ()
  {
    cout << "\nEnter real and imag part of the complex number: ";
    cin >> real >> imag;
  }
  friend complex subtract (complex, complex);
  void display ()
  {
  cout << "\nThe difference of complex numbers is: " << real << "+i" << imag;
  }
  friend void modl(complex a)
  {
	cout<<"\nModulus is : "<<sqrt((a.real*a.real)+(a.imag*a.imag))<<endl;
  }
};
complex subtract (complex a, complex b)
{
  complex t;
  t.real = a.real - b.real;
  t.imag = a.imag - b.imag;
  return t;
}

int main ()
{
  complex a, b, c;
  a.input ();
  b.input ();
  c = subtract (a, b);
  c.display ();
  cout<<"\nModulus of 1st complex";
  modl(a);
  cout<<"\nModulus of 2nd complex";
  modl(b);
  cout<<"\nModulus of 3rd complex";
  modl(c);
  return (0);
}
