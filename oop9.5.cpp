
#include<iostream>
using namespace std;
class Person
{
public:
  Person (int x)
  {
    cout << "Person(x) called" << endl;
  }
  Person ()
  {
    cout << "Person called" << endl;
  }
};

class Faculty:virtual public Person
{
public:
  Faculty (int x):Person (x)
  {
    cout << "Faculty(x) called" << endl;
  }
};

class Student:virtual public Person
{
public:
  Student (int x):Person (x)
  {
    cout << "Student(x) called" << endl;
  }
};

class TA:public Faculty, public Student
{
public:
  TA (int x):Student (x), Faculty (x)
  {
    cout << "TA(x) called" << endl;
  }
};

int
main ()
{
  TA ta1 (30);
  return 0;
}
