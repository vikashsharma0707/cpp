#include<iostream>
using namespace std;
int main(){
	int i,n,sum,rem;
	cout<<"enter number";
	cin>>n;
	i=n;
	sum=0;
	while(n>0){
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(i==sum){
		cout<<"armstrong";
	}
	else{
		cout<<"not a armstrong number";
	}
}
