#include<iostream>
using namespace std;

class A{
	public:
	A(){
		cout<<"class A constructor"<<endl;
	}
	
	~A(){
		cout<<"class A destructor"<<endl;
	}
};

class B:public A{
	public:
	B(){
		cout<<"class B constructor"<<endl;
	}
	
	~B(){
		cout<<"class B destructor"<<endl;
	}
};


class C:public B{
	public:
	C(){
		cout<<"class C constructor"<<endl;
	}
	
	~C(){
		cout<<"class C constructor"<<endl;
	}
};


int main(){
	//C c;
	/*{
		 A obj;
	}
	B obj;*/
	
	A obj;
	B ob;
}
