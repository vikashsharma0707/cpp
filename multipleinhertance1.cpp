
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
	 		void setvalue(int x){
	 			a=x;
			 }	
};

class B{
	 protected:
	 	int b;
	 public:
	 	 void setvalue1(int y){
	 	        b=y;
		  }
};


class C:public A,public B{
	public:
		  int sum=0;
		void result(){
			sum=a+b;
		}
			
	void display(){
		cout<<"addition of two number is"<<sum;
	}
	
};

int main(){
	C aa;
	aa.setvalue(4);
	aa.setvalue1(5);
	aa.result();
	aa.display();
	
}
