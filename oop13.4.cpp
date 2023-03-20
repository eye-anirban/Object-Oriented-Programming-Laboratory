#include<iostream>
using namespace std;
class a
{
public:
a() {printf("\nBase Constructor\n");}
virtual ~a(){printf("\nBase Destructor\n");}
};
class b : public a
{
public:
b(){printf("\nDerived Constructor\n");}
~b(){printf("\nDerived Destructor\n");}
};

int main()
{
a* obj=new b;
delete obj;
return 0;
}
