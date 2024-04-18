#include<iostream>
using namespace std;
int main(){
	int n,fac=1;
	cout<<"enter any number";
	cin>>n;
	
	for(int i=n;i>=1;i--){
		fac=fac*i;
	}
	cout<<n*i<<endl;
	cout<<fac;
	
}
