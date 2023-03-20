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
        cout<<"Combined String: "<<str;
    }
    String operator+(String s)
    {
        String obj;
        strcat(str,s.str);
        strcpy(obj.str,str);
        return obj;
    }
    int operator<(String s)
    {
        int a,b;
        a=strlen(str);
        b=strlen(s.str);

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