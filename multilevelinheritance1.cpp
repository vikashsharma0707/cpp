#include<iostream>
using namespace std;

 class A{
 	
 	protected:
 		int roll;
 		
 	public:
 		void show(){
 			cout<<"enter your roll number";
 			cin>>roll;
		 }
		 
		 void show1(){
		 	cout<<"roll number is"<<roll;
		 }
 };
 
 class B:public A{
 	
 	protected:
 		int sub1,sub2;
 		
 	public:
 		void subject(){
 			cout<<"enter matrks of subject";
 			cin>>sub1>>sub2;
		 }
		 
		 void subject1(){
		 	cout<<"marks is "<<sub1<<endl;
		 	cout<<"marks is"<<sub2<<endl;
		 }
 	
 	
 };
 
 
 class C:public B{
 	 int smarks;
 	 
 	 public:
 	 	void display(){
 	 		cout<<"enter sports marks";
 	 		cin>>smarks;
		  }
		  
		  void display1(){
		  	show1();
		  	subject1();
		  	cout<<"total marks "<<sub1+sub2+smarks;
		  }
 		
 };
 
 
 
 int main(){
 	C aa;
 	aa.show();
 	aa.show1();
 	aa.subject();
 	aa.subject1();
 	aa.display1();
 }
