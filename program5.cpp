// table upto n numbers
/*#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter any number";
	cin>>n;
	
	for(int i=1;i<=10;i++){
		cout<<n*i<<endl;
	}
}*/

// reverse table upto n numbers
/*#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter any number";
	cin>>n;
	
	for(int i=10;i>=1;i--){
		cout<<n*i<<endl;
	}
}*/

// table upto range
/*#include<iostream>
using namespace std;
int main(){
	int n,r;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	 
	for(int i=1;i<=r;i++){
		cout<<n*i;
	}
}*/


// table numbers to range

/*#include<iostream>
using namespace std;
int main(){
	int n,r;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	 
	for(int i=n;i<=r;i++){
		for(int j=1;j<=10;j++){
			cout<<i*j<<" "<<endl;
		}
	}
}*/





// reverse table upto numbers and range
/*#include<iostream>
using namespace std;
int main(){
	int n,r;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	 
	for(int i=r;i>=n;i--){
		for(int j=10;j>=1;j--){
			cout<<i*j<<" "<<endl;
		}
	}
}*/



/*#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	cout<<"enter 1 number";
	cin>>n1;
	cout<<"enter 2 number";
	cin>>n2;
	cout<<"enter 3 number";
	cin>>n3;
	
	
	if(n1>n2 && n1<n3){
		cout<<"smax is n1";
	}
	
	else if(n2>n1 && n2<n3){
		cout<<"smax is n2";
	}
	
	else{
		cout<<"n3 is smax";
	}
}*/


/*#include<iostream>
using namespace std;
int main(){
	int n,rem,sum=0,sum1=0;
	cout<<"enter any number";
	cin>>n;
	
	while(n!=0){
		
		rem=n%10;
		sum1=sum1+rem;
		sum=sum*10+rem;
		n=n/10;
	}
	cout<<sum1<<endl;
	cout<<sum;
}*/


#include<iostream>
using namespace std;
int main(){
	int n,rem,sum=0;
	cout<<"enter any number";
	cin>>n;
	
	while(n!=0){
		rem=n%10;
		sum=sum+rem;
		n=n/10;
		
	}
	cout<<sum;
}







