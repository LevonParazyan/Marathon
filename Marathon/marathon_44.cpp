#include <iostream>
using namespace std;

int fibonacci(int num);

int main() {
    int number;
    cin>>number;
    cout<<fibonacci(number)<<endl;
    return 0;
}

int fibonacci(int num) {
    if(num <= 1) return num;
    return fibonacci(num - 1) + fibonacci(num - 2);
}
