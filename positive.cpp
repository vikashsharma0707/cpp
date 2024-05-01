#include<iostream>
using namespace std;

int main(){
	int n;
	char i;
	cout<<"enter number";
	cin>>n;
	
	if(n>0){
		for(char i='A';i<='Z';i++){
			cout<<i<<" ";
		}
	}
	
	else if(n<0){
		for(char i='z';i>='a';i--){
			cout<<i<<" ";
		}
	}
	
	else if(n==0){
		cout<<"good bye";
	}
		
	
}
