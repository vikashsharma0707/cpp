/*#include<iostream>
using namespace std;

class Friend{
	public:
		int a,b;
	public:
		Friend(int c,int d){
			a=c;
			b=d;
		}
		
		void display(){
			cout<<"addition of two numbers is:"<<a+b;
		}
		
		friend int Sum(Friend);
		   
};

 int Sum(Friend aa){
 	return aa.a+aa.b;
 }
 
 
 
 int main(){
 	Friend aa(2,3);
 	aa.display();
	Sum(aa);
 }*/
 
 
 /*#include<iostream>
 using namespace std;
 
 class B;
 class A{
 	
 	public:
 		int a;
 		
 	public:
 		void add(int c){
 			a=c;
		 }
		 
		 friend void Addition(A,B);
 };
 
 
 
 class B{
 	
 	public:
 		int b;
 		
 	public:
 		void add1(int d){
 			b=d;
		 }
		 
		 friend void Addition(A,B);
 };
 
 
 void Addition(A &ee,B &ff){
 	if(ee.a>ff.b){
 		cout<<ee.a;
	 }
	 
	 else{
	 	cout<<ff.b;
	 }
 }
 
 
 int main(){
 	A ee();
 	ee.add(3);
 	B ff();
 	ff.add1(4);
 	Addition(ee,ff);
 	
 }*/
 
 
 
 
 #include<iostream>
 using namespace std;
 
 
 class A{
 	public:
 	int sal;
 	
 	public:
 	   
 	   friend int increment(A);
 };
 
 int increment(A a){
 	a.sal=a.sal+1000;
 	return a.sal;
 }
 
 int main(){
 	A a;
 	increment(a);
 }
 
 
 
 
 
 
