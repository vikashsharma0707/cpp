#include<iostream>
using namespace std;


class A{
	public:
		void display1(){
			cout<<"inside  A";
		}
};

class B:public A{
	
	public:
		void display2(){
		cout<<"inside B";
	}
};

class C{
	public:
		void display3(){
			cout<<"inside C";
		}
};


class D:public B,public C{
	 public:
	 	void display4(){
	 	cout<<"inside D";
	}	
};


int main(){
	D aa;
	aa.display1();
	aa.display2();
	aa.display3();
	aa.display4();

}



