#include<iostream>
#include<string.h>
using namespace std;

int stringCheck(string str)
{   int i; int f=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='@')
		{
			f=1;
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

		if(str[0]=='@')
		 throw(str[0]);

		int len= str.length();
	    string test2="kiit.ac.in";
	    if(len>10){

	    string sub = str.substr(len-10,len-1);
	    if(sub!="kiit.ac.in")
		  throw ("kiit.ac.in");}

	    else
	     throw ("kiit.ac.in");

	}
	catch(int a)
	{
		cout<<"\nException Caught...\nInvalid Email Id!!! "<<endl;
		throw;
	}
	catch(char ch)
	{
		cout<<"\nException Caught...\nInvalid Email Id!!! "<<endl;
		throw;
	}
   	catch(char const*)
	{
	  	cout<<"\nException Caught...\nInvalid Email Id!!! "<<endl;
	  	throw;
	}
}

int main()
{

	string str1;

	cout<<"\nEnter Email Id: ";
	cin>>str1;

    throwException(str1);

    cout<<"\nEmail Id is Valid";


return 0;
}






