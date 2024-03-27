#include<iostream>
using namespace std;
 /*int main(){
	int n,sum=0;
	cout<<"enter number";
	cin>>n;
	
	for(int i=1;i<n;i++){
		if(n%i==0)
		sum=sum+i;
		else
		sum=sum;
	}
	if(n==sum)
	cout<<"number is perfecr";
	else
	cout<<"number is not perfect";
}*/



    /*int main(){
	int sum=0,n;
	
	for(int i=1;i<100;i++){
		if(n%i==0)
		sum=sum+i;
		else
		sum=sum;
	}
	if(n==sum)
	cout<<"number is perfecr";
	else
	cout<<"number is not perfect";
}*/






 int main(){
	int sum;

	for(int j=2;j<=1000;j++){
		sum=0;
		for(int i=1;i<j;i++){
		      if(j%i==0)
		           sum=sum+i;
              	}
     	if(j==sum)
	       cout<<j<<endl;
}

}











