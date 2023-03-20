#include <bits/stdc++.h>
using namespace std;


class String
{
    char* str;
public:
    String()
    {
        str = new char;

    }
    void input()
    {
        cout<<"Enter string: ";
        cin>>str;
    }
    void display()
    {
        cout<<"String: "<<str;
    }
    friend String operator+(String s,String s1)
    {
        String obj;
        strcat(s.str,s1.str);
        strcpy(obj.str,s.str);
        return obj;
    }
    friend int operator<(String s,String s1)
    {
        int a,b;
        a=strlen(s.str);
        b=strlen(s1.str);

        if(a==b)
        {
            return 1;
        }else if(a>b)
        {
           return 2;
        }else
        {

            return 0;
        }


    }
};
int main()
{
    String str1,str2,str3;
    str1.input();
    str2.input();

    int x;

     if((str1<str2)==1)
        {
            cout<<"\nSame string"<<endl;
        }else if((str1<str2)==2)
        {
           cout<<"\n1st string is bigger"<<endl;
        }else
        {

            cout<<"\n2nd string is bigger"<<endl;
        }
        str3=str1+str2;
    str3.display();
    return 0;
}