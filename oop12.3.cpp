#include<iostream>
#include<stdlib.h>
using namespace std;

class num
{
    int c;
    int *arr;

    public:
    num()
    {
        arr = new int();
    }

    friend istream &operator>>(istream  &input, num &obj )
    {
        cout<<"Enter no. of elements in the array :";
        input>>obj.c;
        obj.arr = new int(obj.c);
        cout<<"Enter "<<obj.c<<" elements->\n";
        for(int i = 0; i<obj.c; i++)
        {
            cout<<"Item "<<i+1<<" :";
            input>>obj.arr[i];
        }
        return input;
    }

    friend ostream &operator<<(ostream &output, const num &obj)
    {
        cout<<"Elements->\n";
        for(int i = 0; i<obj.c; i++)
        {
            output<<obj.arr[i]<<" ";
        }
        return output;
    }

    num operator--()
    {
        num n;
        int x;
        for(int i = 0; i<c; i++)
        {
            x = --arr[i];
            n.arr[i] = x;
        }
        return n;
    }

    num operator--(int)
    {
        num n;
        int x;
        for(int i = 0; i<c; i++)
        {
            x = arr[i]--;
            n.arr[i] = x;
        }
        return n;
    }
};

int main()
{
    num n1;
    cin>>n1;
    cout<<n1;
    cout<<"\nPre decrement : ";
    --n1;
    cout<<n1;
    cout<<"\nPost decrement : ";
    n1--;
    cout<<n1;

    return 0;
}