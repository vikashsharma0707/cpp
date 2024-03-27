#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	char op;
	cout<<"enter first number";
	cin>>num1;
	cout<<"enter second number";
	cin>>num2;
	cout<<"enter op";
	cin>>op;
	
	
	switch(op){
		case '+':
		cout<<num1<<"+"<<num2<<"="<<(num1+num2)<<endl;
		break;
			case '-':
		cout<<num1<<"-"<<num2<<"="<<(num1-num2)<<endl;
		break;
			case '*':
		cout<<num1<<"*"<<num2<<"="<<(num1*num2)<<endl;
		break;
			case '/':
		cout<<num1<<"/"<<num2<<"="<<(num1/num2)<<endl;
		break;
	}
}
