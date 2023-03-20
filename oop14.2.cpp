#include<iostream>

using namespace std;

int main()
{    
	int i,arr[5],x;
	cout<<"Size of array is 5\nEnter 5 elements for array\n";
	for(i=0;i<5;i++)
		cin>>arr[i];
	cout<<"\nEnter an index to display the number from array\n";
	cin>>x;
	try
	{	
		if(x>=0&&x<5)                
		{    
			cout<<arr[x]<<" is at index "<<x;
		}
		else
			throw x;           
	}
	catch(int x)
	{   
		cout<<"Array out of bounds exception\n";
  	    cout<<"Value of x is entered as "<<x<<" which is not between 0 and 4";
	}
	return 0;
}
