#include <iostream>
using namespace std;

int main(){
        int dec_num, tmp;
        string hexdec_num = "";
        char hex[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
        cin>>dec_num;
        while(dec_num > 0){
            tmp = dec_num%16;
            hexdec_num = hex[tmp] + hexdec_num;
            dec_num /= 16;
        }
        cout<<"The hexadecimal number is: "<<hexdec_num<<endl;
        return 0;
}
