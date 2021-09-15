#include <iostream>
#include <string>
using namespace std;

int main(){
        string str;
        cin>>str;
        for(int i = 0; i < str.size(); ++i){
                if(str[i] > 96 && str[i] < 120) str[i] = str[i] - 32;
        }
	cout<<str;
        return 0;
}

