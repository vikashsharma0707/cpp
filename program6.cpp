/*#include<iostream>
using namespace std;
int main(){
	int i,n,rem,sum=0;
	cout<<"enter any number";
	cin>>n;
	
	i=n;
	while(n!=0){
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	
	if(i==sum){
		cout<<"number is armstrong number";
	}
	else{
		cout<<"number is not a armstrong number";
	}
	
}*/




/*#include<iostream>
using namespace std;
int main(){
	int i,n,l,r,rem,sum;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	
	
	for(int i=n;i<=r;i++){
		n=i;
		sum=0;
		while(n!=0){
			rem=n%10;
			sum=sum+rem*rem*rem;
			n=n/10;
		}
		if(i==sum){
			cout<<i<<endl;
		}
	
	}
	
}*/



/*#include<iostream>
using namespace std;
int main(){
	int  i,n,rem,sum;
	cout<<"enter any number";
	cin>>n;
	
	sum=0;
	i=n;
	
	while(n!=0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(i==sum){
		cout<<"pelidrome number";
	}
	else{
		cout<<"not a peidrome number";
	}
	
}*/



#include<iostream>
using namespace std;
int main(){
	int i,n,r,rem,sum;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	
	for(i=n;i<=r;i++){
		n=i;
		sum=0;
		
		while(n!=0){
			rem=n%10;
			sum=sum*10+rem;
			n=n/10;
		}
		if(i==sum){
			cout<<i<<endl;
		}
	}
}
