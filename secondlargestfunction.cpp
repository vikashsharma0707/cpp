// normal program

/*#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3,secondlargest;
	cout<<"enter 1 number";
	cin>>n1;
	cout<<"enter 2 number";
	cin>>n2;
	cout<<"enter 3 number";
	cin>>n3;
	
	if(n1>n2 && n1>n3){
		if(n2>n3){
			secondlargest=n2;
		}
		else{
			secondlargest=n3;
		}
	}
	
	else if(n2>n1 && n2>n3){
		if(n1>n3){
			secondlargest=n1;
		}
		else{
			secondlargest=n3;
		}
	}
		
	else{
		if(n1>n2){
			secondlargest=n1;
		}
		else{
			secondlargest=n2;
		}
	}
	cout<<"second larges number is"<<secondlargest;
}*/





// noparameter and no return
/*#include<iostream>
using namespace std;
void add(){
	int n1,n2,n3,secondlargest;
	cout<<"enter 1 number";
	cin>>n1;
	cout<<"enter 2 number";
	cin>>n2;
	cout<<"enter 3 number";
	cin>>n3;
	
	if(n1>n2 && n1>n3){
		if(n2>n3){
			secondlargest=n2;
		}
		else{
			secondlargest=n3;
		}
	}
	
	else if(n2>n1 && n2>n3){
		if(n1>n3){
			secondlargest=n1;
		}
		else{
			secondlargest=n3;
		}
	}
		
	else{
		if(n1>n2){
			secondlargest=n1;
		}
		else{
			secondlargest=n2;
		}
	}
	cout<<"second larges number is"<<secondlargest;
}

int main(){
	add();
}*/







// having parameter no return
/*#include<iostream>
using namespace std;
 void add(int n1,int n2,int n3){
	int secondlargest;
	
	if(n1>n2 && n1>n3){
		if(n2>n3){
			secondlargest=n2;
		}
		else{
			secondlargest=n3;
		}
	}
	
	else if(n2>n1 && n2>n3){
		if(n1>n3){
			secondlargest=n1;
		}
		else{
			secondlargest=n3;
		}
	}
		
	else{
		if(n1>n2){
			secondlargest=n1;
		}
		else{
			secondlargest=n2;
		}
	}
	cout<<"second larges number is"<<secondlargest;
}

int main(){
	int n1,n2,n3;
	cout<<"enter 1 number";
	cin>>n1;
	cout<<"enter 2 number";
	cin>>n2;
	cout<<"enter 3 number";
	cin>>n3;
	
	add(n1,n2,n3);
}*/






// no parameter having return
/*#include<iostream>
using namespace std;
int add(){
	int n1,n2,n3,secondlargest;
	cout<<"enter 1 number";
	cin>>n1;
	cout<<"enter 2 number";
	cin>>n2;
	cout<<"enter 3 number";
	cin>>n3;
	
	if(n1>n2 && n1>n3){
		if(n2>n3){
			secondlargest=n2;
		}
		else{
			secondlargest=n3;
		}
	}
	
	else if(n2>n1 && n2>n3){
		if(n1>n3){
			secondlargest=n1;
		}
		else{
			secondlargest=n3;
		}
	}
		
	else{
		if(n1>n2){
			secondlargest=n1;
		}
		else{
			secondlargest=n2;
		}
	}
	return secondlargest;
}

int main(){
	int result;
	result=add();
	cout<<result;
}*/






// having parameter and having return
#include<iostream>
using namespace std;
int add(int n1,int n2,int n3){
	int secondlargest;
	
	
	if(n1>n2 && n1>n3){
		if(n2>n3){
			secondlargest=n2;
		}
		else{
			secondlargest=n3;
		}
	}
	
	else if(n2>n1 && n2>n3){
		if(n1>n3){
			secondlargest=n1;
		}
		else{
			secondlargest=n3;
		}
	}
		
	else{
		if(n1>n2){
			secondlargest=n1;
		}
		else{
			secondlargest=n2;
		}
	}
	return secondlargest;
}

int main(){
	int n1,n2,n3;
	cout<<"enter 1 number";
	cin>>n1;
	cout<<"enter 2 number";
	cin>>n2;
	cout<<"enter 3 number";
	cin>>n3;
	int result;
	result=add(n1,n2,n3);
	
	cout<<result;
}
