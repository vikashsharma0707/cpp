// wap to overload prifix increment operator ++,such that it will increment the value of marks of a student by 10.
// student s1(23);
/*++s1;
s1.display();*/
/*#include<iostream>
using namespace std;

class Student{
	int marks;
 public:
 	Student(int a){
 	    
	 marks=a;
	 }
 	
 	
 	
 	Student(){
 	    cout<<"enter the marks";
	 	cin>>marks;
	 }
	  
	 void display(){
	 	cout<<marks<<endl;
	 }
	 
	 
	 Student operator ++(){
	 	marks=marks+10;
	 	
	 }
		
	
};


int main(){
	Student s1(56);
	cout<<"original marks ";
	s1.display();
	++s1;
	cout<<"updated marks ";
	s1.display();
	
	
	
}*/








#include<iostream>
using namespace std;

class Student{
	int marks;
 public:
 	Student(int a){
 	    
	 marks=a;
	 }
 	
 	
 	
 	Student(){
 	    cout<<"enter the marks";
	 	cin>>marks;
	 }
	  
	 void display(){
	 	cout<<marks<<endl;
	 }
	 
	 
	 Student operator ++(int){
	 	marks=marks+10;
	 	
	 }
		
	
};


int main(){
	Student s1(56);
	cout<<"original marks ";
	s1.display();
	s1++;
	cout<<"updated marks ";
	s1.display();
	
	
	
}

