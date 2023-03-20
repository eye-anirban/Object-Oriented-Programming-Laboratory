/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<stdlib.h>
using namespace std;
 
class test 
{
    private:
    int n;
    static int c;

    public:
    test()
    {
        n=0;
    }

    ~test()
    {
        cout<<"Object destroyed\n";
    }

    void count()
    {
        c++;
        cout<<"count :"<<c<<endl;
    }

    static void display(void)
    {
        cout<<endl;
        cout<<"No. of objects-> "<<c<<endl;
    }
};

int test::c=0;

int main()
{
    
    test o1,o2,o3;
    o1.count();
    o2.count();
    o3.count();
    test::display();

    return 0;
}