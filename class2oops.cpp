
// normal class 
/*#include<iostream>
using namespace std;

class Add{
	private:
		int a,b;
		
	public:
		void show(){
			cout<<"enter first numner";
			cin>>a>>b;
		}
		
		void display(){
			cout<<"addition of two number is"<<a+b<<endl;
		}
		
			void display1(){
			cout<<"substraction of two number is"<<a-b;
		}
};


int main(){
	Add aa;
	aa.show();
	aa.display();
	aa.display1();
}*/


// parametrized class
/*#include<iostream>
using namespace std;

class Add{
	private:
		int a,b,sum=0;
		
	public:
	  void show(int c,int d){
	  	a=c;
	  	b=d;
	  }	
	  
	  void display(){
	  	cout<<"addition of two number is"<<a+b<<endl;
	  }
	  
	  void display1(){
	  	cout<<"substraction of two number is"<<a-b;
	  }
};

int main(){
	Add aa;
	aa.show(5,4);
	aa.display();
	aa.show(5,4);
	aa.display1();
	
}*/

// takin input from user
#include<iostream>
using namespace std;

class Add{
	private:
		int a,b;
		
	public:
	  void show(int c,int d){
	  	a=c;
	  	b=d;
	  }	
	  
	  void display(){
	  	cout<<"addition of two number is"<<a+b<<endl;
	  }
	 
	  
	  void display1(){
	  	cout<<"substraction of two number is"<<a-b;
	  }
};

int main(){
	int c,d;
	cout<<"enter two number";
	cin>>c>>d;
	Add aa;
	aa.show(c,d);
	aa.display();
	aa.display1();
	
}



