/*#include<iostream>
using namespace std;
int main(){
	int i,n,count=0;
	cout<<"enter any number";
	cin>>n;
	
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		cout<<"number is prime number";
	}
	else{
		cout<<"number is composite number";
	}
} */





/*#include<iostream>
using namespace std;
int add(){
	int n,i,count=0;
	cout<<"enter any number";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		cout<<"number is prime number";
	}
	else{
		cout<<"number is not a prime number";
	}
}

int main(){
	add();
}*/



/*#include<iostream>
using namespace std;
int add(int n){
	int i,count=0;
	
	
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		cout<<"number is prime number";
	}
	else{
		cout<<"number is not a prime number";
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
	int i,n,count=0;
	cout<<"enter any number";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		return "yes";
	}
	else{
	   return "no";
	}
}

int main(){
	
	string result;
	result =add();
	cout<<result;	
}*/




#include<iostream>
using namespace std;
string add(int n){
	int i,count=0;
	
	
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
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
	result =add(n);
	cout<<result;	
}




