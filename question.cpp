/*Q.5>Design a base class Person with attributes name and address. 
Create another base class Contact with email and phone. Derive Student from both.*/
 
#include<iostream>
using namespace std;

class Person{
	public:
	 string name,address;
	 
	 void display1(string n,string a){
	 	name=n;
	 	address=a;
	 }
	
};


class Contact{
	public:
		string email;
		int contact;
		
		void display2(string e,int c){
			email=e;
			contact=c;
		}
};


class Student:public Person,public Contact{
	
	public:
		void display3(){
			cout<<name<<" "<<address<<" "<<endl<<email<<" "<<contact;
		}
	
};


int main(){
	Student obj;
	obj.display1("ajay","bhopal");
	obj.display2("cybrom@7899",77999888888);
	obj.display3();
}







