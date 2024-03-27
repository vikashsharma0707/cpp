#include<iostream>
using namespace std;
/*int main(){
	int a,b,tem;
	cout<<"enter first number";
	cin>>a;
	cout<<"enter second number";
	cin>>b;
	
	cout<<"before swapping"<<"a is"<<a<<"b is"<<b;
	tem=a;
	a=b;
	b=tem;
	
	cout<<"after swapping value of a"<<a<<endl;
	cout<<"after swapping value of b"<<b<<endl;
}*/



// swapping without third varisable

int main(){
	int a,b;
	cout<<"enter first number";
	cin>>a;
	cout<<"enter second number";
	cin>>b;
	
	cout<<"before swapping"<<"a is"<<a<<"b is"<<b;
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"after swapping value of a"<<a<<endl;
	cout<<"after swapping value of b"<<b<<endl;
}
