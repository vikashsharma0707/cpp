// multilevel inhertnce


/*#include <iostream>
using namespace std;

class A{
	
	public:
		void f1(){
			cout<<"function of class A";
		}
};


class B:public A{
	
	public:
		void f1(){
			cout<<"function of class A";
		}
};

class C:public B{
	//public --> f1()
	
};



int main(){
	C c;
	c.f1();      // locality of referecnce 
}*/






// hierarchical inheritance


/*#include <iostream>
using namespace std;

class A{
	
	public:
		void f1(){
			cout<<"function of class A";
		}
};


class B:public A{
	
	public:
		void f1(){
			cout<<"function of class A";
		}
};

class C:public A{
	//public --> f1()
	
};



int main(){
	B c;
	c.f1();
	/*C c;
	c.f1();  *   // locality of referecnce 
}*/






// Hybrid inheritance


#include <iostream>
using namespace std;

class A{
	
	public:
		void f1(){
			cout<<"function of class A";
		}
};


class B:public A{
	
	public:
		void f2(){
			cout<<"function of class A";
		}
};

class C:public A{
	//public --> f1()
	public:
		void f3(){
			cout<<"function of class B";
		}
};


class D:public C,public B{
	
	public:
		void f4(){
			cout<<"function of class C";
		}
};



int main(){
D d;
d.f4();
d.f3();
d.f2();
d.B::f1();
//  d.f1();    diamod problem
}
