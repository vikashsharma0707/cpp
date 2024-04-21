#include<iostream>
using namespace std;

class Employee{
	public:
		void prepare_salary(){
			cout<<"salary";
		}
		void promotion(){
			cout<<"mini 2 year";
		}	
};

class Executive:public Employee{
	public:
		void prepare_salary(){
			cout<<"salary+hra+company shares+perks";
		}	
};


int main(){
	Employee *p =new Employee;
	p->prepare_salary();
	p->promotion();
	
	cout<<"\n---------------------\n";
	Employee obj;
	obj.prepare_salary();
	obj.promotion();
}
