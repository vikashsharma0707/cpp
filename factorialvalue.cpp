#include<iostream>
using namespace std;
//factorial series
/*int main(){
	int n,fac=1;
	cout<<"enter number";
	cin>>n;
	for(int i=n;i>=1;i--){
	fac=fac*i;
}
    cout<<fac;
}*/


//print of factorial series
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
