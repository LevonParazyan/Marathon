#include <iostream>

using namespace std;

int get_odd_numbers(int arr[]), number;

int main() {
    const int size = 10;
    int arr[size];
    for(int i = 0; i < size; ++i){
        cin>>arr[i];
    }
    get_odd_numbers(arr);
    return 0;
}

int get_odd_numbers(int arr[]){
    int count = 0;
    for(int i = 0; i < 10; ++i){
        if(arr[i] % 2 != 0){
            count++;
        }else continue;
    }
    cout<<count<<endl;
    return 0;
}
