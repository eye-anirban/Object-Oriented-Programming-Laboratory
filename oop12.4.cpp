#include<iostream>
#include<math.h>
using namespace std;
class point
{
    float x,y;
    float s;


public:
    point()
    {
        x=0;
        y=0;
    }
    friend ostream &operator<<( ostream &output, const point &D ) {
         output<<"("<< D.x<< "," << D.y<<")" ;
         return output;
    }

    friend istream &operator>>( istream  &input, point &D ) {
         input >> D.x >> D.y;
         return input;
    }
    point operator+ (point p)
    {
        float s2,a,b;
        point t;
        a=pow(p.x-x,2);
        b=pow(p.y-y,2);
        s2=a+b;

        t.s=sqrt(s2);
        cout<<t.s;

        return t;
    }


};

int main()
{

    point p1,p2,s;

    cout<<"enter the 1st point= ";
    cin>>p1;
    
    cout<<"enter the 2nd point= ";
    cin>>p2;
    cout<<"distance=  ";
     s=p1+p2;


}