//print of factorial series
#include<iostream>
using namespace std;
 int main(){
	int n,fac=1;
	cout<<"enter number";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<i<<"*";
	fac=fac*i;
}
cout<<fac;
}
