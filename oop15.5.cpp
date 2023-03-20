#include<iostream>
#include<cstring>
using namespace std;

template<class type>
void sum(type a, type b){
    type c ;
    c = a + b;
    cout<<"\n"<<c;
}

void sum(string a, string b){
    string c = a+b;
    cout<<"\n"<<c;
}

template<class type>
void sum(type a, type b, int n){
    type c ;
    c = a + b + n;
    cout<<"\n"<<c;
}

int main(){
    string x = "Hello! It's ";
    string y = "Anirban";
    sum(x,y);
    sum(3,4);
    sum(3.4,4.4,6);
    return 0;
}