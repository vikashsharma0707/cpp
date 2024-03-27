#include<iostream>
using namespace std;
int main(){
	int units,bill;
	cout<<"enter the units";
	cin>>units;
	
	
	if(units>=0 && units<=100){
		bill=units*10;
	}
	else if(units>100 && units<=200){
		bill=100*10+(units-100)*15;
	}
	else if(units>200 && units<=300){
		bill=100*10+ 100*15 +(units-200)*20;
	}
	else {
		bill=100*10+100*15+100*20+(units-300)*25;
	}

 cout<<"bill is"<<bill;
 
}
