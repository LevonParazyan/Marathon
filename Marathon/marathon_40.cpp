#include <iostream>
using namespace std;

int count = 1;
int factorial(int num);

int main() {
    int number;
    cin>>number;
    factorial(number);
    cout<<count<<endl;
    return 0;
}

int factorial(int num) {
    if(num != 0){
        count *= num;
        factorial(num - 1);
    }
    return 0;
}
