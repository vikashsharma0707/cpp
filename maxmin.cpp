#include<iostream>
using namespace std;
 /*int main(){
	int a,b,c,sum=0;
	cout<<"enter the first number";
	cin>>a;
	cout<<"enter the second number";
	cin>>b;
	cout<<"enter the third number";
	cin>>c;
	sum=sum+a+b+c;
	
	if(a>b && a>c){
		cout<<"a is the greatest"<<a<<endl;
	}
		else if(b>a && b>c){
		cout<<"b is the greatest"<<b<<endl;
	}
		else{
		cout<<"c is the greatest"<<c<<endl;
	}
	cout<<sum;
}*/


/*int main(){
	int a,b,c;
	cout<<"enter the first number";
	cin>>a;
	cout<<"enter the second number";
	cin>>b;
	cout<<"enter the third number";
	cin>>c;
	
	if(a<b && a<c){
		cout<<"a is the smallest"<<a<<endl;
	}
		else if(b<a && b<c){
		cout<<"b is the smallest"<<b<<endl;
	}
		else{
		cout<<"c is the smallest"<<c<<endl;
	}
}*/



/*int main(){
	int a,b,c;
	cout<<"enter the first number";
	cin>>a;
	cout<<"enter the second number";
	cin>>b;
	cout<<"enter the third number";
	cin>>c;
	
	if(a>b && a>c){
		cout<<"a is the greatest"<<a<<endl;
	}
		else if(b>a && b>c){
		cout<<"b is the greatest"<<b<<endl;
	}
		else{
		cout<<"c is the greatest"<<c<<endl;
	}
		if(a<b && a<c){
		cout<<"a is the smallest"<<a<<endl;
	}
		else if(b<a && b<c){
		cout<<"b is the smallest"<<b<<endl;
	}
		else{
		cout<<"c is the smallest"<<c<<endl;
	}
}*/








int main(){
	int a,b,c,sum=0;
	double avg;
	cout<<"enter the first number";
	cin>>a;
	cout<<"enter the second number";
	cin>>b;
	cout<<"enter the third number";
	cin>>c;
	sum=sum+a+b+c;
	avg=a+b+c/3.;
	if(a>b && a>c){
		cout<<"a is the greatest"<<a<<endl;
	}
		else if(b>a && b>c){
		cout<<"b is the greatest"<<b<<endl;
	}
		else{
		cout<<"c is the greatest"<<c<<endl;
	}
		if(a<b && a<c){
		cout<<"a is the smallest"<<a<<endl;
	}
		else if(b<a && b<c){
		cout<<"b is the smallest"<<b<<endl;
	}
		else{
		cout<<"c is the smallest"<<c<<endl;
	}
	cout<<"the value of sum is"<<sum<<endl;
	cout<<"the value of avg is"<<avg;
}
