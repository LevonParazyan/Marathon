#include <iostream>

using namespace std;

int main() {
    int size = 3, mind = 0;
    int arr[size][size];
    for (int i = 0; i < size; ++i){
        for(int j = 0; j < 3; ++j){
            cin>>arr[i][j];
        }  
    }
    for (int i = 0; i < size; ++i){
        mind = arr[i][i];
        arr[i][i] = arr[i][size - i - 1];
        arr[i][size - i - 1] = mind;
    }
    for (int i = 0; i < size; ++i) { 
        for (int j = 0; j < size; ++j) {
            cout<<arr[i][j]; 
        }
        cout<<endl; 
    }
    return 0;
}
