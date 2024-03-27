#include<iostream>
using namespace std;
/*int main(){
	int i,n,even,odd,range;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>range;
	
	 for(i=1;i<=range;i++){
	 	if(i%2==0)
	 		even=even+i;
		 
	 else
	 odd=odd+i;
	 
	 }
	 cout<<"the sum of even"<<even<<endl;
	cout<<"the sum of odd"<<odd;
}*/


/*int main(){
	int n,sum,r;
	cout<<"enter number";
	cin>>n;
	cout<<"enter number";
	cin>>r;
	
	
	
	for(int i=1;i<=r;i++){
		cout<<i<<endl;
		sum=sum+i;
		
	}
	cout<<sum;
}*/





/*int main(){
	int n,i,sum=0;
	cout<<"enter any number";
	cin>>n;
	
	
	for(i=1;i<=n;i++){
		if(i==n)
		cout<<i<<"+"<<i<<"*"<<"=";
		else
		cout<<i<<"+"<<i<<"*";
		sum=sum*i+i;
		
}
cout<<sum;
}*/




/*int main(){
	float n,i,sum=0;
	cout<<"enter any number";
	cin>>n;
	
	
	for(i=1;i<=n;i++){
		if(i==n)
		cout<<i<<"/"<<i<<"+"<<"=";
		else
		cout<<i<<"/"<<i<<"+";
		sum=sum+i/i;
		
}
cout<<sum;
}*/



int main(){
	int n,i,fac,r;
	cout<<"enter any number";
	cin>>n>>r;
	
	fac=1;
	for(i=r;i>=1;i--){
		fac=fac*i;
	}
	cout<<fac;
	
}
		
	
		
		
		
		
		

