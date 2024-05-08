/*#include<iostream>
using namespace std;
class Y;
class X{
	int a;
	public:
	  void setvalue(int value){
	  	a=value;
	  }
    friend void add(X,Y);	
};


class Y{
		int b;
		public:
	  void setvalue(int value){
	  	b=value;
	  }
    friend void add(X,Y);
	
	
};

void add(X o1, Y o2){
	cout<<"addtiton of two number is: "<<o1.a+o2.b;
}


int main(){
	X aa;
	aa.setvalue(2);
	Y bb;
	bb.setvalue(3);
	add(aa,bb);
}*/




#include<iostream>
using namespace std;
class Add1;
class Add{
	int a;
	 public:
	 	void display(int c){
	 		a=c;
		 }
		 
		 void fun(){
		 	cout<<"valiue"<<a;
		 }
		 
		 friend void exchange(Add &,Add1 &);
};


class Add1{
	int b;
	 public:
	 	void display1(int d){
	 		b=d;
		 }
			 friend void exchange(Add &,Add1 &); 
		 void fun1(){
		 	cout<<"valiue"<<b;
		 }
};


void exchange(Add &x,Add1 &y){
	int temp=x.a;
	x.a=y.b;
	y.b=temp;
	 
}

int main(){

Add aa;
aa.display(3);

Add1 bb;
bb.display1(4);

exchange(aa,bb);
aa.fun();
bb.fun1();
}


