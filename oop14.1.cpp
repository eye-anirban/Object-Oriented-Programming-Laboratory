#include<iostream>

using namespace std;

int main()
{    
	int x,y;
	float z;
	cout<<"Enter x and y to perform x/y\n";
	cin>>x>>y;
	try
	{	
		if(y!=0)                
		{    
			z=x/(y*1.0);
			cout<<x<<" / "<<y<<" = "<<z;
		}
		else
			throw y;           
	}
	catch(int y)
	{   
		cout<<"Division by zero exception occured\n";
  	    cout<<"Value of y is entered as "<<y;
	}
	return 0;
}