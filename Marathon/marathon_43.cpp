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
    for(int i = num; i > 0; --i){
        cout<<i<<endl;
    }
    for (int i = num; i < 0; ++i){
        cout<<i<<endl;
    }
    
    return 0;
}
