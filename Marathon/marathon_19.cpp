#include <iostream>
using namespace std;

void reverse(int arr[], int size);

int main(){
        int size = 10;
        int arr[size];
        for(int i = 0; i < size; ++i){
                cin>>arr[i];
        }
        reverse(arr, size);
	return 0;
}

void reverse(int arr[], int size){
        for(int i = size - 1; i > 0; --i){
                cout<<arr[i]<<" ";
        }
}

