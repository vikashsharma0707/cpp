/*#include<iostream>
using namespace std;
int main(){
	int n,sum,rem;
	cout<<"enter any number";
	cin>>n;
	
	
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	cout<<sum;
	
	
}*/




/*#include<iostream>
using namespace std;
void reverse(){
	int n,sum,rem;
	cout<<"enter any number";
	cin>>n;
	
	
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	cout<<sum;
	
	
}

int main(){
	reverse();
}*/






/*#include<iostream>
using namespace std;
void reverse(int n){
	int sum,rem;

	
	
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	cout<<sum;
	
	
}

int main(){
	int n;
	cout<<"enter any number";
	cin>>n;
	
	reverse(n);
}*/







/*#include<iostream>
using namespace std;
int reverse(){
	int n,sum,rem;
	sum=0;
	cout<<"enter any number";
	cin>>n;

	
	
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	return sum;
	
	
}

int main(){
	int result;
	result=reverse();
	cout<<result;
}*/






#include<iostream>
using namespace std;
int reverse(int n){
	int sum,rem;
	sum=0;

	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	return sum;
	
	 
}

int main(){
	int n;
	cout<<"enter any number";
	cin>>n;
	int result;
	result=reverse(n);
	cout<<result;
}
