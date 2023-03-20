/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

void ChangeHigherValue(int& a, int& b)
{
    if(a > b)
    {
        a = -1;
    }
    else
    if(a < b)
    {
        b = -1;
    }
}

int main()
{
    int a, b;
    cout << "Input for two integers: ";
    cin >> a >> b;

   
    ChangeHigherValue(a, b);

    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    return 0;    
}