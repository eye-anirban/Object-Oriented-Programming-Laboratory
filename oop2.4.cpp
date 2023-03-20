#include <iostream>
using namespace std;
class complex
{
int real;
int img;
public:
void getdata(int i)
{
cout<<"Enter Real portion of the Number"<<i+1<<":";
cin>>real;
cout<<"Enter Imaginary portion of the number"<<i+1<<":";
cin>>img;
}
void display(int i)
{

cout<<"Number "<<i+1<<" : "<<real<<"+"<<img<<"i"<<endl;
}

};
int main()
{
complex ob[10];
for(int i=0; i<10; i++)
{
ob[i].getdata(i);
}
cout<<"\n\n"<<endl;
for(int i=0; i<10; i++)
{
ob[i].display(i);
}
return 0;
}
