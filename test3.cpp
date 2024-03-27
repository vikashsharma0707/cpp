#include<iostream>
using namespace std;
int main()


int num,sum=0,temp,last;
cout<<"enter"
cin<<num;
temp=num;

while(num>){
	last=num%10;
	sum=sum+(last*last*last);
	num=num/10;
}

if(temp==sum){
	cout<<"armstrong number";
}

else{
	cout<<"it not a number";
}



