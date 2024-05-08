#include<iostream>
using namespace std;

class Add{
	public:
		void display(){
			cout<<"parent class";
		}	
};

class Add1:public Add{
	public:
		void display(){
			cout<<"child class";
		}	
};

int main(){
	Add1 aa;
	aa.display();
	aa.Add::display();
}
