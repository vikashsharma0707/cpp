// normal program
/*#include<iostream>
using namespace std;
int main(){
	int n,i,rem,sum;
	cout<<"enter number";
	cin>>n;
	
	sum=0;
	i=n;
	
	while(n>0){
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(i==sum){
		cout<<"number is armstrong";
	}
	else{
		cout<<"number is not a armstrong";
	}
}*/





// no parameter no return
/*#include<iostream>
using namespace std;
 void add(){
	int n,i,rem,sum;
	cout<<"enter number";
	cin>>n;
	
	sum=0;
	i=n;
	
	while(n>0){
		rem=n%10;
		sum=sum+(rem*rem*rem);
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





// having parameter and no return
/*#include<iostream>
using namespace std;
 void add(int n){
	int i,rem,sum;
	
	
	sum=0;
	i=n;
	
	while(n>0){
		rem=n%10;
		sum=sum+(rem*rem*rem);
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
	cout<<"enter number";
	cin>>n;
	add(n);
}*/


 // no parameter having return
/*#include<iostream>
using namespace std;
string add(){
	int n,i,rem,sum;
	cout<<"enter number";
	cin>>n;
	
	sum=0;
	i=n;
	
	while(n>0){
		rem=n%10;
		sum=sum+(rem*rem*rem);
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
	cout<<result;
}*/






 // having parameter and having return
#include<iostream>
using namespace std;
string add(int n){
	int i,rem,sum;
	
	
	sum=0;
	i=n;
	
	while(n>0){
		rem=n%10;
		sum=sum+(rem*rem*rem);
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
	cout<<"enter number";
	cin>>n;
	string result;
	result=add(n);
	cout<<result;
}



