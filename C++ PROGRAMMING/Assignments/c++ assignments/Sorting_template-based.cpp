//Write a program of to sort the array using templates.

#include<iostream>
using namespace std;
#define N 10

template <class T>
void sort(T arr[], int n){
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
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
	int int_array[N];
	cout<<"Entner integer array elements:"<<endl;
	for (int i = 0; i < N; i++)
	{
		cin>>int_array[i];
	}
	sort(int_array,N);
	
	cout<<"After sorting they are :"<<endl;
	for (int i = 0; i < N; i++)
	{
		cout<<int_array[i]<<", ";
	}
	cout<<endl;
	
	return 0;
}