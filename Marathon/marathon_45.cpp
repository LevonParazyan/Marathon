#include <iostream>
using namespace std;

int main() {
    int first=0, second=1, n, sum=0;
    cin>>n;
    for(int i=0 ; i<n ; i++) {  
        if(i <= 1) {
            sum=i;
        }
        else {
            sum=first + second;
            first=second;
            second=sum;  
        }
        
    }  
    cout<<sum + first<<endl;
   return 0;
}
