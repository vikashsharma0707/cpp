
// multiple inheritance
/*#include<iostream>
using namespace std;


class A{
	 protected:
	 	int a;
	 	
	 	public:
	 		void add(){
	 			cout<<"enter number";
	 			cin>>a;
			 }	
};

class B{
	 protected:
	 	int b;
	 public:
	 	 void addition(){
	 	 	cout<<"enter number";
	 	 	cin>>b;
		  }
	
	
};


class C:public A,public B{
	public:
	void display(){
		cout<<"addition of two number is"<<a+b;
	}
	
};



int main(){
	C aa;
	aa.add();
	aa.addition();
	aa.display();
	
}*/





#include<iostream>
using namespace std;


class A{
	 protected:
	 	int a;
	 	
	 	public:
	 		void add(int x){
	 			a=x;
			 }	
};

class B{
	 protected:
	 	int b;
	 public:
	 	 void addition(int y){
	 	        b=y;
		  }
	
	
};


class C:public A,public B{
	public:
		  int sum=0;
		void result(int x,int y){
			sum=a+b;
		}
			
	void display(){
		cout<<"addition of two number is"<<sum;
	}
	
};

int main(){
	C aa(2,3);
	aa.add();
	aa.result();
	aa.addition();
	aa.display();
	
}
