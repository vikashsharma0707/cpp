#include<iostream>
using namespace std;
/*int main(){
	int n,sum;
	cout<<"enter number";
	cin>>n;
	sum=0;
	
	for(int i=1;i<n;i++){
		if(n%i==0)
		sum=sum+i;
		else
		sum=sum;
	}
	if(n==sum)
	cout<<"perfect number";
	else
	cout<<"not a perfect number";
}*/



// perfect number upto range

int main(){
	int sum;
	
	for(int i=2;i<=1000;i++){
		sum=0;
		for(int j=1;j<i;j++){
		if(i%j==0)
		sum=sum+j;
	}
	if(i==sum)
	cout<<i<<endl;
}
}








