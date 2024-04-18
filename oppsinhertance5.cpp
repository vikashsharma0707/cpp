#include <iostream>
using namespace std;



class Person{
	protected:
      string name;
	  int age;
	  
	  public:
	  	Person(){
	  		cout<<"enter name and age:";
	  		cin>>name>>age;
		  }
};


class Employee:public Person{
	int eid;
	string department;
 public:
 	Employee(){
 		cout<<"enter eid and department";
 		cin>>eid>>department;
	 }
	 
	 void display(){
	 	cout<<name<<" "<<age<<" "<<eid<<" "<<department;
	 }
	 
	
	
};



int main(){
	Employee e;
	e.display();
}
