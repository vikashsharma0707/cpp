// wap to overload prifix increment operator ++,such that it will increment the value of marks of a student by 10.
// student s1(23);
/*++s1;
s1.display();*/
/*#include<iostream>
using namespace std;

class Student{
	int marks;
 public:
 	
	 void react(){
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
	Student s1;
	s1.react();
	s1.display();
	++s1;
	cout<<"original marks ";
	s1.display();
	
	
	
}*/










// gretest number by operator overloading
#include<iostream>
using namespace std;

class Student{
	int marks;
 public:
 	Student (int a){
      marks=a;
	 }
	 
	 void display(){
	 	cout<<marks<<endl;
	 }
	 
	 Student operator ++(Student  ob){
//	 Student temp(0);
	 ob.marks=ob.marks+10;
	 return marks;
	 	
	 	
	 }
		
	
};


int main(){
	Student s1(23);
	Student result=s1;
	result.display();
	++s1;
	s1.display();
}

