
#include<iostream>
using namespace std;

int add(int l,int u){
	int n,rem,sum;
	for(int i=l;i<=u;i++){
		n=i;
		sum=0;
		while(n!=0){
		   rem=n%10;
		   sum=sum+(rem*rem*rem);
		   n=n/10;	
		}
		if(i==sum);
		return i;
	}
	
	
}

int main(){
	int l,u;
	cout<<"enter number";
	cin>>l;
	cout<<"enter range";
	cin>>u;
	
	int result;
	result=add(l,u);
	cout<<result;
}
