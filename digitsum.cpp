#include<iostream>
using namespace std;
/*int main(){
	int n,sum;
	cout<<"enter number";
	cin>>n;
	while(n>0){
	
	sum=sum+n%10;
	n=n/10;
}
	cout<<sum<<endl;
}*/



int main(){
	int n,sum;
	cout<<"enter number";
	cin>>n;
	while(n>0){
	
	sum=sum*10+n%10;
	n=n/10;
}
	cout<<sum<<endl;
}
