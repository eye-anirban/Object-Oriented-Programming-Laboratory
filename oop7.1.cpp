/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

class student
{
protected:
  char name[20];
  int roll,age;
public:
  void getdata ()
  {
    cout << "Enter roll, name , age" << endl;
    cin >> roll >> name >> age;
  }

};

class test:public student
{
protected:
  int sub[5];
public:
  void getmark ()
  {
    cout << "Enter 5 subjects marks : " << endl;
    cin >> sub[0] >> sub[1] >> sub[2] >> sub[3] >> sub[4];
  }

  void details ()
  {
    cout << "\n\nName : " << name << " Roll number : " << roll << endl;
    cout << "Marks in 5 subjects : " << sub[0] << ", " << sub[1] << ", " <<sub[2] << ", " << sub[3] << ", " << sub[4] << endl;
    cout << "\nAge : " << age << endl;  
  }

};

int
main ()
{
  test ob;
  ob.getdata ();
  ob.getmark ();
  ob.details ();
}
