#include<iostream>
using namespace std;


class Employee{
	public:
	virtual void calculateSalary()=0;
	virtual void displayDetails()=0;
};

class Manager:public Employee{
	void calculateSalary(){
		cout<<"this slaray class\n";
	}
		void displayDetails(){
		cout<<"this is display class\n";
	}
};

class Worker:public Employee{
	void displayDetails(){
		cout<<"this is display class\n";
	}
	
		void calculateSalary(){
		cout<<"this slaray class\n";
	}
};


int main(){
	Employee *p = new Manager;
	p->calculateSalary();
	p->displayDetails();
	
	Employee *r = new Worker();
	r->calculateSalary();
	r->displayDetails();	
}



