#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter the first number";
	cin>>a;
	cout<<"enter the second number";
	cin>>b;
	
	while(a!=b){
		if(a>b){
			a-=b;
		}
			else{
				b-=a;
			}
	}
	cout<<"hcf is"<<a<<b<<endl;
	
}
