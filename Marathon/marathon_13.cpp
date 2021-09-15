#include <iostream>
using namespace std;

int main(){
	int max = 0, min, num = 0;
	cin>>num;
	min = num%10;
	while(num){
		if(num%10 < min) min = num%10;
		if(num%10 > max) max = num%10;
		num /= 10;
	}
	cout<<"max number is: "<<max<<endl;
	cout<<"min number is: "<<min<<endl;
	return 0;
}
