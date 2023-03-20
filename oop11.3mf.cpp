#include<iostream>

using namespace std;

class Time
{
	int h,m,s;
	public:
	    Time()
	    {

        h=0;
        m=0;
        s=0;
	    }
		void input()
		{
			cin>>h>>m>>s;
		}
		void dis()
		{
			cout<<h<<" hours "<<m<<" mins and "<<s<<" seconds\n";
		}
		Time operator+(Time T2)
		{
			Time T;
			T.h=T2.h+h;
			T.m=T2.m+m;
			T.s=T2.s+s;
			if(T.s>=60)
			{
				T.m++;
				T.s-=60;
			}
			if(T.m>=60)
			{
				T.h++;
				T.m-=60;
			}
			return T;
		}
         int operator>(Time T2)
		{
			int s1,s2;
			s1=(h*3600)+(m*60)+s;
			s2=(T2.h*3600)+(T2.m*60)+T2.s;
			if(s1>s2)
			return 1;
			else
			return 0;
		}
};

int main()
{
	Time t1,t2,sum;
	cout<<"Enter the 1st time = ";
	t1.input();
	cout<<"Enter the 2nd time = ";
	t2.input();
	sum=t1+t2;
	cout<<"Sum = ";
	sum.dis();
	if(t1>t2)
		cout<<"\nt1 > t2";
	else
		cout<<"\nt1 < t2";
	return 0;
}