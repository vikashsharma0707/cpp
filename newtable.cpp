#include<iostream>
using namespace std;

void table(int n,int i){
	for(i=1;i<=10;i++){
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
}

int main(){
	int a,b;
	
	cout<<"enter number";
	cin>>a>>b;
	 
	 table(a,b);
}

