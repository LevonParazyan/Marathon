#include <iostream>

using namespace std;

int main() {
    int size = 3;
    int arr[size][size];
    for (int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            cin>>arr[i][j];
        }  
    }
    for (int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            if(i + j == size - 1) cout<<arr[i][j];
        }  
    }
    return 0;
}
