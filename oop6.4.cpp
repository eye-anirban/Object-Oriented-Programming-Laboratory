/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std; 
class A {
    int i;
    public:
        A(int a = 0) 
        {   i=a;
            cout << "A"<<i<<"() constructor is called "<<endl;
                     
        }
        ~A()
        {
            cout << "~A"<<i<<"() destructor is invoked "<<endl;
        }
};
 

int main()
{
    A a1(1);
    A a2(2);
    A a3(3);
    return 0;
}
