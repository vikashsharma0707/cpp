#include <iostream>
using namespace std;
 class Carengine{
 	public:
 		int enginetype;
		int engineno;
 			
 		Carengine(int a,int b){
	      enginetype=a;
	      engineno=b;
		 }
		 
		 void display(){
		 cout<<" enter enginetype"<<enginetype;
		  cout<<" enter engineno"<<engineno;	 	
		 }	
 	
 };
 
 
 int main(){
 	Carengine g("hero",1556);
 	g.display();
 	
 }
