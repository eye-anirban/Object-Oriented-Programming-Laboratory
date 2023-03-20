/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;


void print(char x='*', int n=80)
{
	for(int i=0;i<n;i++){
        cout<<x<<" ";
    }
    cout<<endl;
}

int main(){
    int n,op;
    bool flag=true;
    char a;
    while(flag){
        cout<<"1.Enter number and char."<<endl;
        cout<<"2.Enter only char."<<endl;
        cout<<"3.No input."<<endl;
        cout<<"Enter your options: "<<endl;
        cin>>op;
        if(op==1){
            cout<<"Enter the number: "<<endl;
            cin>>n;
            cout<<"Enter the char: "<<endl;
            cin>>a;
            print(a,n);
        }
        else if(op==2){
            cout<<"Enter the char: "<<endl;
            cin>>a;
            print(a);
        }
        else if(op==3){
            print();
        }
        else{flag=false;}
    }
    return 0;

}