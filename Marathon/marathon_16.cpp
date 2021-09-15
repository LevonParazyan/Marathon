#include <iostream>
using namespace std;

int getMin(int arr[], int size);

int main(){
	int size = 10;
	int arr[size];
	for(int i = 0; i < size; ++i){
		cin>>arr[i];
	}
	cout<<"min value is: "<<endl;
	cout<<getMin(arr, size);
}

int getMin(int arr[], int size){
	int min = arr[size - 1];
	for(int i = 0; i < size; ++i){
		if(min > arr[i]) min = arr[i];
	}
	return min;
}
