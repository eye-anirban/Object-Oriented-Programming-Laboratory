/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

class lab
{
public:
  inline int square (int n)
  {
    return n * n;
  }
  inline int cube (int n)
  {
    return n * n * n;
  }
};

int main ()
{
  lab num;
  int n;
  cout << "Enter the Number: " << endl;
  cin >> n;
  cout << "Square of " << n << " = " << num.square (n) << endl;
  cout << "Cube of " << n << " = " << num.cube (n) << endl;
  return 0;

}
