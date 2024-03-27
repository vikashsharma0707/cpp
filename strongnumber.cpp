#include<iostream>
using namespace std;
 int main(){
	int i,n,sum,e,f,rem;
	cout<<"enter any number";
	cin>>n;
	
	sum=0;
	n=e;
	while(n>0){
		rem=n%10;
		f=1;
		for(i=1;i<=rem;i++){
			f=f*i;
			sum=sum+f;
			n=n/10;
		}
	}
	if(e==sum){
		cout<<"strong number";
	}
	else{
		cout<<"not astrong number";
	}
	
}
