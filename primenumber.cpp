#include<iostream>
using namespace std;
 int main(){
	int n,i;
	cout<<"enter number";
	cin>>n;
	
	for(i=1;i<=n;i++){
		if(n%i==0)
			break;
	}
	if(i==2){
		cout<<"prime number";
	}
	else{
		cout<<"not a prime number";
	}
}




//print numbers from 1 to 100
  /*int main(){
	int i,j;
	cout<<"prime numbers";
	
	
		
	for(i=1;i<=100;i++){
	
	
	for(j=2;j<=100;j++){
		if(i%j==0)
		break;
	}
	if(i==j){
		cout<<j<<" "<<endl;
	}
}
}*/







