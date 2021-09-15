#include <iostream>
using namespace std;

int getMinMax(int arr[], int size);

int main(){
        int size = 10;
        int arr[size];
        for(int i = 0; i < size; ++i){
                cin>>arr[i];
        }
        cout<<"Sum is: "<<endl;
        cout<<getMinMax(arr, size);
}

int getMinMax(int arr[], int size){
        int max = arr[size - 1], min = arr[size - 1], tmp;
        for(int i = 0; i < size; ++i){
                if(max < arr[i]) max = arr[i];
		if(min > arr[i]) min = arr[i];
        }
        return max + min;
}

