/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class con
{
    private:
    char *s=new char[300];
    int l;

    public:
    con()
    {
        s=new char[300];
        l=0;
    }

    con(char *str, int len)
    {
        s=str;
        l=len;
    }

    con(con &f)
    {
        s=f.s;
        l=f.l;
    }

    ~con()
    {
        cout<<"Object destroyed\n";
    }

    public:
    void input()
    {
        cout<<"Enter string :";
        cin.getline(s, 300);
        l=strlen(s);
        cout<<endl;
    }

    void join(con &f, con &t)
    {
        strcat(f.s, t.s);
        cout<<"Concatenated string-> "<<f.s<<endl;
        cout<<"Length-> "<<strlen(f.s)<<endl;
        cout<<endl;
    }

    void display()
    {
        cout<<"String-> "<<s<<endl;
        cout<<"Length-> "<<l<<endl;
        cout<<endl;
    }
};

int main()
{
    
    con o1;
    char *str=new char[300];
    cout<<"Enter string :";
    cin.getline(str, 300);
    int len=strlen(str);
    con o2(str, len);
    con o3=o2;
    con o4;
    o4.input();
    o2.display();
    o3.display();
    o4.display();
    o2.join(o3, o4);

    return 0;
}
