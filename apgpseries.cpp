#include<iostream>
using namespace std;
/*int main(){
	int n,i;
	cout<<"enter number";
	cin>>n;
	
	// ap series 1,3,5,7,9,,11   differece =2 first term =1   an=a+(n-1)d      a=first term    d=difference  
	//  an=1+(n-1)2     1+2n-2     2n-1
	
	
	for(i=1;i<=2*n-1;i=i+2){
		cout<<i<<" ";
	}
}*/





int main(){
	int i,n,a;
	cout<<"enter number";
	cin>>n;
	a=1;
	
	for(i=1;i<=n;i++){
		cout<<a<<" ";
		a=a+2;
	}
}




// gp series 


/*int main(){
	int n,i,a;
	cout<<"enter number";
	cin>>n;
	
	
	a=1;
	for(i=1;i<=n;i++){
		cout<<a<<" ";
		a=a*2;
	}
}*/
