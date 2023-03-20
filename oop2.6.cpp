#include <iostream>
using namespace std;
class employee
{
string name;
int age,basic,DA,HRA;
double gross;
public:
void getinfo()
{
cout<<"Enter Name: ";
cin>>name;
cout<<"Enter Age: ";
cin>>age;
cout<<"Enter Basic salary: ";
cin>>basic;
DA=0.8*basic;
HRA=0.1*basic;
gross=basic+DA+HRA;
}
void display()
{
cout<<"Name: "<<name<<endl;
cout<<"Age: "<<age<<endl;
cout<<"Basic salary is "<<basic<<endl;
cout<<"Gross salary is "<<gross<<endl;
}

};

int main()
{
int n=0;
cout<<"Enter number of employees: ";
cin>>n;
employee obj[n];
for(int i=0; i<n; i++)
{
cout<<"Enter Employee "<<i+1<<" details"<<endl;
obj[i].getinfo();
}
cout<<"\n\n"<<endl;
for(int i=0; i<n; i++)
{
cout<<"Employee "<<i+1<<endl;
obj[i].display();
cout<<"\n"<<endl;
}
return 0;
}
