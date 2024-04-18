#include<iostream>
using namespace std;
 /*int main(){
	int n,sum,last,temp;
	cout<<"enter number";
	cin>>n;
	sum=0;
	temp=n;
	while(n>0){
	
		last=n%10;
		sum=sum+(last*last*last);
		n=n/10;	
}
	if(temp==sum){
		cout<<"armstrong number";
	}
	else
	cout<<"composite number";
	
}*/



int main(){

int n,sum,last;
for(int i=100;i=900;i++){
	sum=0;
	n=i;
	while(n>0){
	
		last=n%10;
		sum=sum+(last*last*last);
		n=n/10;	
}
	if(i==sum)
		cout<<i<<" ";
	
}
}
