/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
class A
{
private:
  int x;
public:
    friend class C;
};
class B
{
private:
  int y;
public:
    friend class C;
};
class C
{
private:
  int a;			//Will store the value of x from class B
  int b;			//Will store the value of y from class C
public:
  void inputAB ()
  {
    A s;
    B r;
      a = s.x;
      b = r.y;
      cout << "Enter the value of x\n";
      cin >> a;

      cout << "Enter the value of y\n";
      cin >> b;

  }
  void displayAB ()
  {
      cout << "The value of x is:  " << a << "\nThe value of y is:  " << b <<endl;
  }
  void addAB ()
  {

    cout << "The addition of " << a << " and " << b << " is " << a +b << endl;
  }
};

int main ()
{
  C c;
  c.inputAB ();
  c.displayAB ();
  c.addAB ();
}
