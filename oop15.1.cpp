#include<iostream>
using namespace std;


template <class T>
void sort(T arr[], int SIZE){
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i+1; j < SIZE; j++)
		{
			if (arr[i] > arr[j])
			{
				T temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


int main(){
	int int_array[50], N;
	float float_array[50];
	
	cout<<"Enter the number of elements in the arrays :";
	cin>>N;
	
	cout<<"Enter integer array elements:"<<endl;
	for (int i = 0; i < N; i++)
	{
		cin>>int_array[i];
	}
	
	cout<<"Enter floating array elements:"<<endl;
	for (int i = 0; i < N; i++)
	{
		cin>>float_array[i];
	}
	
	sort(int_array,N);
	sort(float_array, N);
	
	cout<<"After sorting Integer Array :"<<endl;
	for (int i = 0; i < N; i++)
	{
		cout<<int_array[i]<<", ";
	}
	cout<<endl;
	
	cout<<"After sorting Floating Array :"<<endl;
	for (int i = 0; i < N; i++)
	{
		cout<<float_array[i]<<", ";
	}
	
	return 0;
}
