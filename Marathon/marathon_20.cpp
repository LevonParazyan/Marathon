#include <iostream>
using namespace std;

void add_arrays(int arr[], int arr2[], int size);

int main(){
        int size = 5;
        int arr[size], arr2[size];
        for(int i = 0; i < size; ++i){
                cin>>arr[i];
		cin>>arr2[i];
        }
        add_arrays(arr, arr2, size);
}

void add_arrays(int arr[], int arr2[], int size){
        for(int i = 0; i < size; ++i){
                cout<<arr[i] + arr2[i]<<" ";
        }
}

