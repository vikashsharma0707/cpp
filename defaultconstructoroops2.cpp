// default constructor
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
		
		void display(){
			cout<<"addition of two number is"<<a+b;
		}
};



int main(){
	Add aa;
	aa.display();
}
