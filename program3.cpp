/*#include<iostream>
using namespace std;
// swapping using third variable
int main(){
	int a,b,t;
	cout<<"enter the first number";
	cin>>a;
	cout<<"enter the second number";
	cin>>b;
	cout<<"before swapping the value of a is"<<a;
	cout<<"before swapping the value of a is"<<b;
	
	t=a;
	a=b;
	b=t;
	cout<<"after swapping the value of a is"<<a;
	cout<<"after swapping the value of a is"<<b;
	
}*/




/*#include<iostream>
using namespace std;
// swapping without using third variable
int main(){
	int a,b;
	cout<<"enter the first number";
	cin>>a;
	cout<<"enter the second number";
	cin>>b;
	cout<<"before swapping the value of a is"<<a;
	cout<<"before swapping the value of a is"<<b;
	
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	
	cout<<"after swapping the value of a is"<<a;
	cout<<"after swapping the value of a is"<<b;
	
}**/




/*#include<iostream>
using namespace std;
// maximum number among the three numbers
int main(){
	int n1,n2,n3;
	cout<<"enter first number";
	cin>>n1;
	cout<<"enter second number";
	cin>>n2;
	cout<<"enter third number";
	cin>>n3;
	
	if(n1>n2 && n1>3){
		cout<<"n1 is greatest"<<n1;
	}
	else if(n2>n1 && n2>n3){
		cout<<"n2 is greatest"<<n2;
	}
	
		else{
		cout<<"n3 is greatest"<<n3;
	}
	cout<<"addition of these number is"<<n1+n2+n3;
}*/





/*#include<iostream>
using namespace std;
// maximum number among the three numbers
int main(){
	int n1,n2,n3;
	cout<<"enter first number";
	cin>>n1;
	cout<<"enter second  number";
	cin>>n2;
	cout<<"enter third  number";
	cin>>n3;
	
	if(n1<n2 && n1<n3){
		cout<<"n1 is smallest"<<n1;
	}
	else if(n2<n1 && n2<n3){
		cout<<"n2 is smallest"<<n2;
	}
	
		else{
		cout<<"n3 is smallest"<<n3;
	}
	cout<<"addition of these number is"<<n1+n2+n3;
}*/


#include<iostream>
using namespace std;
// maximum number among the three numbers
int main(){
	int n1,n2,n3,max;
	cout<<"enter first number";
	cin>>n1;
	cout<<"enter second  number";
	cin>>n2;
	cout<<"enter third  number";
	cin>>n3;
	max=n1;
	
	 if(n2<max && n2>n3){
		cout<<"n2 is smallest"<<n2;
	}
	
		else if(n3>>max  && n3>n2){
		cout<<"n3 is smallest"<<n3;
	}
	cout<<"addition of these number is"<<n1+n2+n3;
}





