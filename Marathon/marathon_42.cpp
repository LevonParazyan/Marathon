#include <iostream>
using namespace std;

int print(int num);

int main() {
    int number;
    cin>>number;
    print(number);
    return 0;
}

int print(int num) {
    if(num == 0) return 0;
    if(num > 0){
        cout<<num<<endl;
        print(num - 1);
        return 0;
    }
    return 0;
}
