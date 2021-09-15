#include <iostream>
using namespace std;

int add_func(int firstNum, int secondNum){
	return firstNum + secondNum;
}

int sub_func(int firstNum, int secondNum){
        return firstNum - secondNum;
}
int mul_func(int firstNum, int secondNum){
        return firstNum * secondNum;
}
int div_func(int firstNum, int secondNum){
        return firstNum / secondNum;
}


int main(){
        int firstNum = 0, secondNum = 0;
	char sym;
	cout<<"Enter first number"<<endl;
	cin>>firstNum;
	cout<<"Enter second number"<<endl;
	cin>>secondNum;
	cout<<"What you want to do?"<<endl;
	cin>>sym;
	switch(sym) {
		case '+':
			cout<<add_func(firstNum, secondNum);
			break;
		case '-':
                        cout<<sub_func(firstNum, secondNum);
                        break;
		case '*':
                        cout<<mul_func(firstNum, secondNum);
                        break;
		case '/':
                        cout<<div_func(firstNum, secondNum);
                        break;
		default:
			cout<<"please enter correct operator"<<endl;
	}
        return 0;
}

