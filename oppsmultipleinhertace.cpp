// multiple inhertance
// diamod problem



#include <iostream>
using namespace std;

class A{
	
	public:
		void f1(){
			cout<<"function of class a";
		}
};


class B{
	
	public:
		void f1(){
			cout<<"function of class B";
		}
};

class C:public A,public B{
	
};



int main(){
	
	C c;
//	c.f1();
	c.A::f1();
}
