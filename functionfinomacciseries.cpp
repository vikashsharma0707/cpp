#include<iostream>
using namespace std;



void fibo(){
	int n1=0,n2=1,limit,n3;
	cout<<"enter range upto which you want to print:";
	cin>>limit;
	cout<<n1<<" ";
	
	
	while(1){
		n3=n1+n2;
		if(n3>limit)
		break;
		cout<<n3<<" ";
		n1=n2;
		n2=n3;
	}
}
int main(){
	fibo();
}
