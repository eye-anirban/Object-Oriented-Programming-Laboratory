#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Student{
	string name;
	public:
		string dob;
		string doj;
		
		void input()
		{
			cout<<"Enter student name : ";
			string s;
			getline(cin,s);
			name = s;
			cout<<"Enter Date-of-Birth : ";
			getline(cin,dob);
			cout<<"Enter Date-of-Joining : ";
			getline(cin,doj);
		}
		
		void printName()
		{
			cout<<"Student name : "<<name<<endl;
		}
};




class Date: public Student{
	public:
		void print()
		{
			cout<<"Date-of-Birth : "<<dob<<endl;
			cout<<"Date-of-Joining : "<<doj<<endl;
		}
};


int main()
{
	int n;
	cout<<"Enter details of 3 students : "<<endl<<endl;
	Date d[3];
	
	for(int i=0; i<3; i++)
	{
		d[i].input();
		cout<<endl;
	}
	
	
	cout<<endl<<"Displaying details of students : "<<endl;
	cout<<"---------------------------------"<<endl<<endl;
	for(int i=0; i<3; i++)
	{
		d[i].printName();
		d[i].print();
		cout<<endl;
	}
}