#include<iostream>
#include<string.h>
using namespace std;

int stringCheck(string str)
{   int i; int f=1;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='-'||str[i]=='_'||str[i]=='=')
		{
			f=0;
			break;
		}
	}
	return f;
}

void throwException(string str)
{
	try
	{   int test=stringCheck(str);

		if(test==0)
		 throw (test);

		if(str[0]!='w'||str[1]!='w'||str[2]!='w')
		 throw("z");

		int len= str.length();

	    if(len>2048){
		throw ('y');
		}
	}

	catch(int a)
	{
		cout<<"\nThe URL is invalid"<<endl;
		throw;
	}
	catch(char ch)
	{
		cout<<"\nThe URL is invalid"<<endl;
		throw;
	}
   	catch(char const*)
	{
	  	cout<<"\nThe URL is invalid "<<endl;
	  	throw;
	}
	cout<<"\nThe URL is valid";
}

int main()
{

	 string str;
	 cout<<"Enter a url: ";
	 cin>>str;

    throwException(str);


return 0;
}
