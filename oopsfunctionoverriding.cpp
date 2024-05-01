// fumctiom overriding and method overriding
#include<iostream>
using namespace std;

class A{
	public:
		void display(){
			cout<<"base class a"<<endl;
		}
};

class B:public A{
	 public:
	 	void display(){
	 		cout<<"this is derived class b"<<endl;
	 		//A::display(); // call base class
		 }
	
};

int main(){
	B aa;
	aa.display();
	aa.A::display();

}
