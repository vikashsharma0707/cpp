#include<iostream>
using namespace std;

class Area{
	double r;
	double area;
		public:
	
	Area(){
		cout<<"enter radius";
		cin>>r;
	}
	
	/*Area(double a){
		r=a;
	}*/
	
	void show(){
	    
		area=3.14*r*r;
		cout<<"area is"<<3.14*r*r;
	}
	
	void display(){
		cout<<"area of circle is"<<area;
	}
	
};

int main(){
	 Area aa;
	//Area aa(5);
	aa.show();
	aa.display();
}
