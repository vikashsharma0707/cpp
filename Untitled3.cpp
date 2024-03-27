#include<iostream>
using namespace std;
/*int main(){
	int n1,n2;
	cout<<"enter number";
	cin>>n1;
	cout<<"enter second number";
	cin>>n2;
	
	while(n1!=n2){
		if(n1>n2)
		n1=n1-n2;
		else
		n2=n2-n1;
	}
	cout<<"hcf is"<<n1;
	
	
	
}*/





 int main(){
	int n1,n2,hcf,lcm,a1,a2;
	cout<<"enter number";
	cin>>n1;
	cout<<"enter second number";
	cin>>n2;
	a1=n1;
	a2=n2;
	
	while(n1!=n2){
		if(n1>n2)
		n1=n1-n2;
		else
		n2=n2-n1;
		hcf=n1;
		lcm=a1*a2/hcf;
	}
	cout<<lcm;
	
	
	
	
}
