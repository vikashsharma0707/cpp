#include<iostream>
using namespace std;
int main(){
	int n,l,u,rem,sum;
	cout<<"enter the lower limit";
	cin>>l;
	cout<<"enter the upper limit";
	cin>>u;
	
	for(int i=l;i<=u;i++){
		n=i;
	    sum=0;
	
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(i==sum){
 	cout<<i<<endl;
  }
 } 
 
}
