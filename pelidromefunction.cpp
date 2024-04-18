/*#include<iostream>
using namespace std;
int main(){
	int i,n,rem,sum;
	cout<<"enter any number";
	cin>>n;
	
	
	sum=0;
	i=n;
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(i==sum){
		cout<<"number is pelidrome number";
	}
	else{
		cout<<"number is not a pelofrome number";
	}
}*/





/*#include<iostream>
using namespace std;
void add(){
	int i,n,rem,sum;
	cout<<"enter any number";
	cin>>n;
	
	
	sum=0;
	i=n;
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(i==sum){
		cout<<"number is pelidrome number";
	}
	else{
		cout<<"number is not a pelofrome number";
	}
}

int main(){
	add();
}*/





/*#include<iostream>
using namespace std;
void add(int n){
	int i,rem,sum;
	
	sum=0;
	i=n;
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(i==sum){
		cout<<"number is pelidrome number";
	}
	else{
		cout<<"number is not a pelofrome number";
	}
}

int main(){
	int n;
	cout<<"enter any number";
	cin>>n;
	
	add(n);
}*/




/*#include<iostream>
using namespace std;
string add(){
	int i,n,rem,sum;
	cout<<"enter any number";
	cin>>n;
	
	sum=0;
	i=n;
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(i==sum){
		return "yes";
	}
	else{
	   return "no";
	}
}

int main(){
	string result;
	result=add();
	cout<<result;2
	
	
}*/




#include<iostream>
using namespace std;
string add(int n){
	int i,rem,sum;
	
	
	sum=0;
	i=n;
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(i==sum){
		return "yes";
	}
	else{
	   return "no";
	}
}

int main(){
	int n;
	cout<<"enter any number";
	cin>>n;
	string result;
	result=add(n);
	cout<<result;
	
	
}
