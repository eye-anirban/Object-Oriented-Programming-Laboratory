#include<bits/stdc++.h>
using namespace std;
const int N = 4;

template <class Type>
class Array{
    private:
        Type arr[N];
    public:
    	
        void read();
        void sortArr();
        void display();
};
template <class Type>
void Array<Type>::read(){
            for(int i = 0; i < N; i++){
                cin>>arr[i];
            }
        }
template <class Type>
void Array<Type>::sortArr(){
			sort(arr,arr+N);
        }
template <class Type>
void Array<Type>::display(){
            int SIZE = sizeof(arr)/sizeof(Type);
            for(int i = 0; i < SIZE; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

int main(){
    Array <int> i_obj;
    Array <float> f_obj;
    cout<<"Enter integer array:";
    i_obj.read();
    cout<<"Enter floating number array:";
    f_obj.read();
    i_obj.sortArr();
    f_obj.sortArr();
    cout<<"Sorted integer array:"<<endl;
    i_obj.display();
    cout<<endl<<"Sorted floating number array:"<<endl;
    f_obj.display();
    return 0;
}

