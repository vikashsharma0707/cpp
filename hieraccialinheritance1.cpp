#include<iostream>
using namespace std;

class A{
	 public:
	 	void message(){
	 		cout<<"this is a class";
		 }
};

class B:public A{
	
	public:
		void msg(){
			cout<<"this is b class"<<endl;
		}
	
	
};

class C:public A{
	
	public:
		void display(){
			cout<<"this is c class";
		}
};



int main(){
	
	B aa;
	aa.message();
	aa.msg();
	
	C bb;
	bb.message();
	bb.display();
}
