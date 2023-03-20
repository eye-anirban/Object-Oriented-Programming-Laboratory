/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int x= 10;
int main()
{
    int x=20;
    cout<<:: x<<" ";
    cout<<x<<" ";
    {x=30;
     cout<<x<<" ";
    }

    return 0;
}
