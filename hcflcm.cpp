#include<iostream>
using namespace std;

//hcf of numbers
/*int main(){
	int num1,num2;
	cout<<"enter first number";
	cin>>num1;
	cout<<"enter second number";
	cin>>num2;
	
	while(num1!=num2){
		if(num1>num2){
			num1=num1-num2;
		}
		else{
		   num2=num2-num1;
		}
	}
	cout<<"hcf is:"<<num1;
}*/




//lcm of numbers
#include<iostream>
using namespace std;
int main(){
 int a,b,lcm,hcf,a1,b1;
 cout<<"enter the first number";
 cin>>a;
  cout<<"enter the second number";
 cin>>b;
 a1=a;
 b1=b;
 
 while(a!=b){
 	if(a>b){
 		a=a-b;
	 }
	 else{
	 	b=b-a;
	 }
	 
	 hcf=a;
	 lcm=a1*b1/hcf;
 }
 cout<<"lcm is"<<lcm;
}
