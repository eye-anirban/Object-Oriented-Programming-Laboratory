/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

class Data
{
private:
  int x;
  static int Input;
  static int Output;
public:
  void input ();
  void output ();
  void display ();
};

int Data::Input = 0;
int Data::Output = 0;

void Data::input ()
{
  cout << "Enter the value of x\n";
  cin >> x;
  Input++;
}

void Data::output ()
{
  cout << "The value of x is " << x << endl;
  Output++;
}

void Data::display ()
{
  cout << "The input function has been called  " << Input << " times\n";
  cout << "The output function has been called  " << Output << " times\n";
}

int main ()
{
  Data d;
  d.input ();
  d.output ();
  d.input ();
  d.output ();
  d.display ();
}
