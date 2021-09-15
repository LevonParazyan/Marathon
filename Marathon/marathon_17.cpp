#include <iostream>
using namespace std;

int getMax(int arr[], int size);

int main(){
        int size = 10;
        int arr[size];
        for(int i = 0; i < size; ++i){
                cin>>arr[i];
        }
        cout<<"max value is: "<<endl;
        cout<<getMax(arr, size);
}

int getMax(int arr[], int size){
        int max = arr[size - 1], tmp;
        for(int i = 0; i < size; ++i){
                if(max < arr[i]){
			max = arr[i];
			tmp = i;
		}
        }
        return tmp;
}

