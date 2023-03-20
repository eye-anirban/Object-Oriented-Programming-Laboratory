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
    friend Distance operator++(Distance d)
    {
        Distance t;

        cout<<"Pre\n";
        if(d.i==11)
        {t.f=++d.f;
         t.i=0;
        }
        else{
        t.f=++d.f;
        t.i=++d.i;}
        return t;
    }
    friend Distance operator++(Distance d,int)
    {


        cout<<"Post\n";
        if(d.i==11)
        {d.f++;
         d.i=0;
        }
        else{
        d.f++;
        d.i++;}

        return d;
    }
    void dis()
    {

        cout<<"feet="<<f<<" inches="<<i<<endl;
    }
};
int main()
{
    Distance D1;
    cout<<"Enter the value of feets and inches= ";
    D1.input();
    D1.dis();
    cout<<"Original= \n";
    Distance D2;

    D2=++D1;
    D2.dis();
    D2=D1++;
    D2.dis();


}