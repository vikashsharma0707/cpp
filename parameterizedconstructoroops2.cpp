#include<iostream>
using namespace std;

class Add{
	private:
	 int a,b;
	 
	 public:
	 	Add(int c,int d){
	 		a=c;
	 		b=d;
		 }
		 
		 void display(){
		 	cout<<"addition of two number is"<<a+b;
		 }
};

int main(){
	Add aa(2,3);
	aa.display();
}
