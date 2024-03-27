#include<iostream>
using namespace std;
// swapping of two numbers with third variable.
/*int main(){
	int a,b,temp;
	cout<<"enter first number";
	cin>>a;
	cout<<"enter second number";
	cin>>b;
	cout<<"before swapping"<<":"<<a<<b;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swapping";
	cout<<"value of a is:"<<a<<endl;
	cout<<"value of a is:"<<b<<endl;
		
}*/

int main(){
	int a,b;
	cout<<"enter first number";
	cin>>a;
	cout<<"enter second number";
	cin>>b;
	cout<<"before swapping"<<":"<<a<<b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"after swapping";
	cout<<"value of a is:"<<a<<endl;
	cout<<"value of a is:"<<b<<endl;
		
}

