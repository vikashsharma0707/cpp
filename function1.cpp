// wap to create a f() named add which can add 4 numbers

/* parameter--> 4 int
reaturn-->

also find average of all value
*/

#include<iostream>
using namespace std;

int add(int a,int b,int c,int d){    // a=n1=2,b=3,c=4,d=5
return a+b+c+d;                   //control goes to main()
	                                //formal parameters
}



int main(){
	int n1,n2,n3,n4,result;
	cout<<"enter 4 numbers:";      //2 3 4 5
	cin>>n1>>n2>>n3>>n4;
	
	result=add(n1,n2,n3,n4);           // function calling // control goes to add()
	    cout<<"ADDITION:"<<result<<endl; 
		cout<<"Average"<<result/4.0;                      
}
