#include <iostream>
using namespace std;

class student
{
	string name;
	int roll;
	int marks;
	public:
		void getinfo()
		{
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter Roll Number: ";
			cin>>roll;
			cout<<"Enter Marks: ";
			cin>>marks;
			}
		void display()
		{
			cout<<"\n\nTHE DETAILS OF THE STUDENT ARE:"<<endl;
			cout<<"NAME OF THE STUDENT: "<<name<<endl;
			cout<<"Roll Number: "<<roll<<endl;
			cout<<"Marks: "<<marks<<endl;
			
			}	
};

int main()
{
	student s1;
	s1.getinfo();
	s1.display();
	return 0;
}


