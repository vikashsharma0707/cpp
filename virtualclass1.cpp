
// virtual function
/*#include<iostream>
using namespace std;

class Add{
	 public:
	 	virtual void show(){
	 		cout<<"this is base class";
		 }
};


class Add1:public Add{
	 public:
	 	 void show(){
	 		cout<<"this is child class";
		 }
};

int main(){
	Add *p =new Add1;
	p->show();
}*/




//pure vietual function
#include<iostream>
using namespace std;


class Add{
	public:
		virtual void show()=0;
		virtual void show1()=0;
		
		
		void display(){
			cout<<"this is display function"<<endl;
		}
};

class Add1:public Add{
	   public:
	   	void show(){
	   		cout<<"this is child class"<<endl;
		   }
		   
		void show1(){
			cout<<"this is child class1";
		}
	
};


int main(){
	Add *p =new Add1;
	p->show();
	p->show1();
}

