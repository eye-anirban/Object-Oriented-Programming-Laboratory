#include<math.h>
#include<iostream>
using namespace std;
class dist
{
int x,y;
public:
void getdata()
{
cout<<"Enter x and y coordinates : ";
cin>>x>>y;
}
void display()
{
	
}
};
int main()
{
dist c1,c2;
c1.getdata();
c2.getdata();
cout<<"Coordinate 1: ";
c1.display();
cout<<"Coordinate 2: ";
c2.display();
c1.add(c1,c2);
cout<<"Distance between them = "<<c1.add(c1,c2)<<endl;
return 0;
}
