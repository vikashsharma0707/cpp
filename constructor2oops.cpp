/*#include<iostream>
using namespace std;

class Add{
	private:
		double r;
		
	public:
		Add(){
			cout<<"enter radius";
			cin>>r;
		}
		
		Add(double a){
			r=a;
		}
		
		void area(){
			cout<<"area of circle is"<<3.14*r*r;
		}
};

int main(){
	Add aa(5);
	aa.area();
}*/



#include<iostream>
using namespace std;

class Add{
	private:
		int a,b;
		
	public:
		Add(){
		  cout<<"enter two numbers";
		  cin>>a>>b;
		}
		
		Add(int c,int d){
			a=c;
			b=d;
		}
		
		void add(){
			cout<<"addition of two number is"<<a+b<<endl;
		}
		
		void substract(){
			cout<<"subtraction of two number is"<<a-b<<endl;
		}
		
		void multiply(){
			cout<<"multiplication of two number is"<<a*b<<endl;
		}
		
		void divide(){
			cout<<"division of two number is"<<a/b<<endl;
		}
		
	
};


int main(){
	Add aa(10,5);
	aa.add();
	aa.substract();
	aa.multiply();
	aa.divide();
}


