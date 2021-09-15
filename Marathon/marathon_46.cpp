#include <iostream>
using namespace std;

int print_arr(int arr[], int leng, int n);

int main() {
    int arr[] = { 55, 42, 11, 4, 8 };
    int leng = sizeof(arr) / sizeof(arr[0]);
    print_arr(arr, leng, 0);
    return 0;
}

int print_arr(int arr[], int leng, int n) {
    if( leng <= n) return 0;
    cout<<arr[n]<<" ";
    n++;
    return print_arr(arr, leng, n);
}
