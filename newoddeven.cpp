#include<iostream>
using namespace std;
int main(){
	int n,sum=0,;
	cout<<"enter the number";
	cin>>n;
	
	for(int i=1;i<=100;i++){
		if(n%2==0){
		cout<<i<<endl;
		sum=sum+i;

		}
		else{
			cout<<i<<endl;
			odd=odd+i;
		}
	}
	cout<<even<<endl;
	cout<<odd;
}
