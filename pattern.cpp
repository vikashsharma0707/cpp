#include<iostream>
using namespace std;
/*int main(){
	int n,i,j;
	cout<<"enter number";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n*2-i;j++){
			if(j>=i && j<=n*2-1)
			cout<<"*";
			else
			cout<<" ";
	
		}
			cout<<endl;
	}
       	
}*/




int main(){
	int n,i,j;
	cout<<"enter number";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j<=i && j<=n*2-1)
			cout<<"*";
			else
			cout<<" ";
	
		}
			cout<<endl;
	}
       	
}
