#include<iostream>
using namespace std;
int largest(int n1,int n2,int n3){
	
	
	
	if(n1>n2 && n1>n3){
		if(n2>n2){
			cout<<"n2 is second larges"<<n2;
		}
		else{
			cout<<"n3 is second largest"<<n3;
		}
	}
	
	
		else if(n2>n1 && n2>n3){
		if(n1>n3){
			cout<<"n1 is second larges"<<n1;
		}
		else{
			cout<<"n3 is second largest"<<n3;
		}
	}
	
	else{
		if(n1>n2){
			cout<<"n1 is second largest"<<n1;;
		}
		else{
			cout<<"n2 is second largest"<<n2;
		}
	}
}



int main(){
	int n1,n2,n3;
	
	cout<<"enter first number";
	cin>>n1;
	cout<<"enter second  number";
	cin>>n2;
	cout<<"enter third number";
	cin>>n3;
	
	largest(n1,n2,n3);
}
