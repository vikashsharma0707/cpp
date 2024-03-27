#include<iostream>
using namespace std;
/*int main(){
	int n,x,y,z;
	cout<<"enter number";
	cin>>n;
	
	x=0;
	y=1;
	z=0;
	for(z=1;z<=n;z=x+y){
		cout<<z<<endl;
		x=y;
		y=z;
	}
}*/




int main(){
	int n,x,y,z,count;
	cout<<"enter number";
	cin>>n;
	
	x=0;
	y=1;
	z=0;
	for(count=1;count<=n;count++){
		cout<<z<<endl;
		x=y;
		y=z;
		z=x+y;
	}
}
