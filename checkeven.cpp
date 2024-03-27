#include<iostream>
using namespace std;

int main(){
	int n,sum;
	cout<<"enter number";
	cin>>n;
	while(n>0){
	
	sum=sum*10+n%10;
	n=n/10;
	if(sum%2==0)
	cout<<"even number";
	
}
	cout<<sum<<endl;
}
