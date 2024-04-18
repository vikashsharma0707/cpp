#include<iostream>
using namespace std;
int add(){
	int n,x,y,z,count;
	cout<<"enter any number";
	cin>>n;
	count=0;
	x=0;
	y=1;
	z=0;
	
	for(count=1;count<=n;count++){
		cout<<"\n"<<z;
		x=y;
		y=z;
		z=x+y;
	}
	//return z;
}

int main(){
	int result;
	result=add();
	cout<<result;
}
