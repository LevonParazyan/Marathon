#include <iostream>
using namespace std;

int main(){
        int num = 0, mul = 1;
        cin>>num;
        while(num){
                mul *= num % 10;
                num /= 10;
        }
        cout<<mul;
        return 0;
}

