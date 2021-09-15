#include <iostream>
#include <string>
using namespace std;
 
int main(){
    	int dec_num, tmp;
    	string bin_num;
	cin>>dec_num;	
        while(dec_num > 0){
            tmp = dec_num%2;
            bin_num = to_string(tmp) + bin_num;
            dec_num /= 2;
        }
        cout<<"The binary number is: "<<bin_num<<endl; 
	return 0;
}
