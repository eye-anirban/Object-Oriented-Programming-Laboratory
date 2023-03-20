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
    cout << "Enter roll and name and age" << endl;
    cin >> roll >> name >> age;
  }

};

class test:public student
{
protected:
  int sub1;
  int sub2;
  int sub3;
  int sub4;
  int sub5;
public:

  void getmark ()
  {
    cout << "Enter 5 subjects marks : " << endl;
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;
  }
  void details ()
  {
    cout << "\n\nName : " << name << "\nRoll number : " << roll << endl;
    cout << "\nMarks in 5 subjects : " << sub1 << ", " << sub2 << ", " << sub3
      << ", " << sub4 << ", " << sub5 << endl;
    cout<<"\nAge : "<<age<<endl;
  }

};

class result:public test
{

  int total;
  float percent;
public:
  void calc ()
  {
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percent = (total * 100) / 500;

  }
  void display ()
  {
    cout << "Total Marks = " << total << "\nPercentage = " << percent << endl;
  }

};

int
main ()
{
  result ob1;
  ob1.calc ();
  ob1.getdata ();
  ob1.getmark ();
  ob1.details ();
  ob1.calc ();
  ob1.display ();

}
