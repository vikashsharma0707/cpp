/*#include<iostream>
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
}*/





// virtual function by using pointer
#include<iostream>
using namespace std;

class Employee{
	public:
	virtual	void prepare_salary(){
			cout<<"salary\n";
		}
		void promotion(){
			cout<<"mini 2 year\n";
		}	
};

class Executive:public Employee{
	public:
		void prepare_salary(){
			cout<<"salary+hra+company shares+perks\n";
		}	
};


int main(){
    Employee *p =new Executive;
    p->prepare_salary();
	p->promotion();
	
	// when virtual keyboard is used with f() is parent class
   // pointer dependency vanish
   // now we depend on object creation
	
	
}
