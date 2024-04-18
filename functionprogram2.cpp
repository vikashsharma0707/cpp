/*#include<iostream>
using namespace std;
int main(){
	int n,i,rem,sum=0;
	cout<<"enter any number";
	cin>>n;
     
     i=n;
     while(n!=0){
     	rem=n%10;
     	sum=sum+rem*rem*rem;
     	n=n/10;
		 
	 }
	 if(i==sum){
	 	cout<<"number is armstrong";
	 }
	 else{
	 	cout<<"number is not a armstrong";
	 }
	 
}*/


/*#include<iostream>
using namespace std;


int add(){
	int n,i,rem,sum=0;
	cout<<"enter any number";
	cin>>n;
     
     i=n;
     while(n!=0){
     	rem=n%10;
     	sum=sum+rem*rem*rem;
     	n=n/10;
		 
	 }
	 if(i==sum){
	 	cout<<"number is armstrong";
	 }
	 else{
	 	cout<<"number is not a armstrong";
	 }
	 
}

int main(){
	add();
}*/


/*#include<iostream>
using namespace std;

int add(int n){
	int i,rem,sum=0;
	i=n;
	while(n!=0){
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	if(i==sum){
		cout<<"number is armstrong";
	}
	else{
		cout<<"number is not a armstrong";
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


int add(){
	int n,i,rem,sum=0;
	cout<<"enter any number";
	cin>>n;
     
     i=n;
     while(n!=0){
     	rem=n%10;
     	sum=sum+rem*rem*rem;
     	n=n/10;
		 
	 }
	 
	 return sum;
	
	 
}

int main(){
 int result,i;
 result=add();
 
  if(i==result){
	 	cout<<"number is armstrong";
	 }
	 else{
	 	cout<<"number is not a armstrong";
	 }
 
}*/



#include<iostream>
using namespace std;

int add(int n){
	int i,rem,sum=0;
	i=n;
	while(n!=0){
		n=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	return sum;
	
}

int main(){
	int n,i,result;
	cout<<"enter any number";
	cin>>n;
	 add(n);
	 result=add(n);
	
	if(i==result){
		cout<<"number is armstrong";
	}
	
	else{
		cout<<"number not a armstrong";
	}
		 
	
}








