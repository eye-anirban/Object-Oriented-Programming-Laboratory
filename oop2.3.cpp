#include <iostream>
using namespace std;

class student
{
	string name;
	int roll;
	int marks[5];
	int tot_marks=0;
	double percentage;
	public:
		void getinfo()
		{
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter Roll Number: ";
			cin>>roll;
			cout<<"Enter Marks in 5 different subjects:\n ";
			for(int i=0; i<5; i++)
			{
				cout<<"Enter Marks of Subject "<<i+1<<" : ";
				cin>>marks[i];
				tot_marks= tot_marks+ marks[i];	
			}
			}
		void display()
		{
			cout<<"\n\nTHE DETAILS OF THE STUDENT ARE :\n"<<endl;
			cout<<"Student's Name: "<<name<<endl;
			cout<<"Roll Number: "<<roll<<endl;  
			for(int i=0; i<5; i++)
			{
				cout<<"Marks of Subject "<<i+1<<" : ";
				cout<<marks[i]<<endl;	
			}
			cout<<"Total Marks: "<<tot_marks<<endl;
			cout<<"Percentage : "<<tot_marks/5<<"%"<<endl;
			}	
};

int main()
{
	student ob;
	ob.getinfo();
	ob.display();
	return 0;
}

