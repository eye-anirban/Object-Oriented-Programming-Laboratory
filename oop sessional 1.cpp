#include <iostream>
using namespace std;

int func(int &a){
    return a+1;
}

int func(int const &a, int const &b){
    return a+b;
}

int main()
{
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    
    cout<<"\nDo you want to enter 2nd number? (0 or 1) : ";
    cin>>c;
    if (c==1)
    
    {cout<<"\nEnter the second number: ";
    cin>>b;

    cout<<"\nThe sum of the two numbers is "<<func(a,b);}
    else 
    {
        cout<<"\nAfter increment :"<<func(a);
    }

    return 0;
}