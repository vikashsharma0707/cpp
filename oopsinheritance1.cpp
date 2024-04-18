#include<iostream>
using namespace std;
 class Parent{
 	public:
 		void f1(){
 			cout<<"function of the class parent\n";
		 }
 	
 	
 	
 	
 };
 
 
 
 
 class Child :public Parent{
 	
 };
 
 int main(){
 	Child c;
 	c.f1();
 }
 
 
 
