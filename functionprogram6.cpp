/*#include<iostream>
using namespace std;
int main(){
	int n1,n2,hcg;
	cout<<"enter first number";
	cin>>n1;
	cout<<"enter second number";
	cin>>n2;
	
	while(n1!=n2){
		if(n1>n2){
			n1=n1-n2;
		}
		else{
			n2=n2-n1;
		}

	}
	cout<<"hcf is "<<n1;
}*/



/*#include<iostream>
using namespace std;
void add(){
	int n1,n2,hcg;
	cout<<"enter first number";
	cin>>n1;
	cout<<"enter second number";
	cin>>n2;
	
	while(n1!=n2){
		if(n1>n2){
			n1=n1-n2;
		}
		else{
			n2=n2-n1;
		}

	}
	cout<<"hcf is "<<n1;
}

int main(){
	add();
}*/





/*#include<iostream>
using namespace std;
void add(int n1,int n2){
	int hcf;
	while(n1!=n2){
		if(n1>n2){
			n1=n1-n2;
		}
		else{
			n2=n2-n1;
		}

	}
	cout<<"hcf is "<<n1;
}

int main(){
	int n1,n2,hcf;
	cout<<"enter first number";
	cin>>n1;
	cout<<"enter second number";
	cin>>n2;
	
	add(n1,n2);
}*/




/*#include<iostream>
using namespace std;
int add(){
	int n1,n2,hcf;
	cout<<"enter first number";
	cin>>n1;
	cout<<"enter second number";
	cin>>n2;
	while(n1!=n2){
		if(n1>n2){
			n1=n1-n2;
		}
		else{
			n2=n2-n1;
		}

	}
	return n1;
}

int main(){
	int result,i;
	result=add();
     cout<<"hcf is "<<result;
}*/



#include<iostream>
using namespace std;
int add(int n1,int n2){
	int hcf;
	
	while(n1!=n2){
		if(n1>n2){
			n1=n1-n2;
		}
		else{
			n2=n2-n1;
		}

	}
	return n1;
}

int main(){
	int n1,n2;
	cout<<"enter first number";
	cin>>n1;
	cout<<"enter second number";
	cin>>n2;
	int result,i;
	result=add( n1,n2);
     cout<<"hcf is "<<result;
}













