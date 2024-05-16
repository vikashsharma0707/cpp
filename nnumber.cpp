/*#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter any number";
	cin>>n;
	
	for(int i=0;i<=n;i++){
		cout<<i<<endl;
	}
}*/


/*#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter any number";
	cin>>n;
	
	for(int i=0;i<=n;i++){
		if(i%2==0){
			cout<<i<<endl;
		}
		
	
	}
}*/


/*#include<iostream>
using namespace std;

int main(){
 int n;
 cout<<"enter any number ";
 cin>>n;
 
 for(int i=0;i<=10;i++){
 	cout<<n*i<<endl;
 }
}*/


/*#include<iostream>
using namespace std;

int main(){
	int l,u;
	cout<<"enter the lower limit";
	cin>>l;
	cout<<"enter the upper limit";
	cin>>u;
	
	
	for(int i=l;i<=u;i++){
		for(int j=0;j<=10;j++){
			cout<<i*j<<endl;
		}
	}
	
}*/


#include<iostream>
using namespace std;
int main(){
	int n,rem,sum;
	cout<<"enter any number";
	cin>>n;
	
	sum=0;
	int i=n;
	
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	cout<<sum;
}








