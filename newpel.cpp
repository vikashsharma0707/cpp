// pelidrme range
#include<iostream>
using namespace std;
int peli(int n,int i,int sum,int rem,int r){
	
	for(i=1;i<=r;i++){
		n=i;
		sum=0;
		
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
		
}
	if(i==sum)
	cout<<i<<endl;
	}
}


int main(){
int a, b, c, d, e;
	cout<<"enter range";
	cin>>e;
	peli(a,b,c,d,e);
}


