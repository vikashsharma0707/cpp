#include<iostream>
using namespace std;

int fac(){
	int n,fac;
	cout<<"enter any number";
	cin>>n;
	
	fac=1;
	
	for(int i=n;i>=1;i--){
		fac=fac*i;
	}
	cout<<fac;
}

int main(){
	fac();
}
