#include <bits/stdc++.h>
using namespace std;

class Unary {
private:
	int i;

public:
	Unary(int i = 0)
	{
		this->i = i;
	}

Unary operator++(int)
{
		Unary temp;
		temp.i = i++;
		return temp;
}
void  display()
	{
		cout << "i = " << i << endl;
	}
};

int main()
{
    int n;
    cout<<"enter the value= ";
    cin>>n;
	Unary i1(n);

	cout << "Before increment: ";
	i1.display();

	Unary i2;
	i2= i1++;

	cout << "After post increment: ";
	i2.display();
    return 0;
}
