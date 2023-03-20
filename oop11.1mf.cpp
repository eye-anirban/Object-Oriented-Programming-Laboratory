#include<iostream>
using namespace std;
class Distance
{
    int f;
    int i;
public:

  	void input()
	{
		cin>>f>>i;
	}
    Distance operator++()
    {
        Distance t;

        cout<<"\nPre\n";
        if(i==11)
        {t.f=++f;
         t.i=0;
        }
        else{
        t.f=++f;
        t.i=++i;}
        return t;
    }
     Distance operator++(int)
    {
        Distance t;

        cout<<"\nPost\n";
        if(i==11)
        {t.f=f++;
         t.i=0;
        }
        else{
        t.f=f++;
        t.i=i++;}

        return t;
    }
    void dis()
    {

        cout<<"feet="<<f<<" inches="<<i<<endl;
    }
};
int main()
{
    Distance D1;
    cout<<"\nEnter the value of feets and inches= ";
    D1.input();
    cout<<"Original= \n";
    D1.dis();
    
    Distance D2;

    D2=++D1;
    D2.dis();
    D2=D1++;
    D2.dis();

}