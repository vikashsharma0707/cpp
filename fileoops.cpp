#include<iostream>
using namespace std;

class Shapes{
    protected:
    	int d1,d2;
    	
    public:
    	Shapes(int a){
    		d1=a;
		}
	
	    	Shapes(int a,int b){
    		d1=a;
    		d2=b;
		}
		
		virtual void calculate_area(){
			cout<<"area calculated here";
		}
	
};

 class Circle:public Shapes{
 	public:
 		Circle(int a):Shapes(a){
 			
		 }
		 
		 void calculate_area(){
		 	cout<<"Area of circle:"<<3.14*d1*d1<<endl;
		 }
 };
 
 
 class Square:public Shapes{
 	public:
 		Square(int a):Shapes(a){
 			
		 }
		 
		 void calculate_area(){
		 	cout<<"Area of Square:"<<d1*d1<<endl;
		 }
 };
 
  class Triangle:public Shapes{
 	public:
 		Triangle(int a,int b):Shapes(a,b){
 			
		 }
		 
		 void calculate_area(){
		 	cout<<"Area of triangle is:"<<1/2*d1*d2;
		 }
 };
 
 
 
 int main(){
 	
	 Shapes *C = new Circle(5);
	 Shapes *T = new Triangle(5,10);
	 Shapes *S = new Square(5);
	 
	 Shapes *Ar[3]= {C,T,S};
	 for(int i=0;i<3;i++){
	 	Ar[i]->calculate_area();
	 }
	 
	 
	 
	 
	 /*Circle aa(5);
 	aa.calculate_area();
 	Square bb(5);
 	bb.calculate_area();
 	Triangle cc(4,5);
 	cc.calculate_area();*/
 }
