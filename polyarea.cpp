/*#include<iostream>
using namespace std;
 class Area{
 	
 	public:
 	   void area(int s){
 	   	cout<<"area of squre is "<<s*s;
		}
		
		void area(int l,int b){
			cout<<"area of rectangel is "<<l*b;
		}
 	
 	
 };
 
 int main(){
 	Area obj;
 	obj.area(4);
 	obj.area(4,5);
 	
 }*/
 


/*#include<iostream>
using namespace std;

class Message{
	
	public:
		void mymessage(){
			cout<<"i love programming language";
		}
		
		void mymessage(string n){
			cout<<" i love "<<n;
		}
	
	
};


int main(){
	Message obj;
	obj.mymessage();
	obj.mymessage("python");
}*/





#include<iostream>
using namespace std;

class Bank{
	
	public:
	   int amount;
		
		
		void addamount(){
		   int a=100;
		    amount=50;
		   cout<<amount+a<<endl;
		}
		
		void addamount(int b){
			 amount=50;
			cout<<amount+b;
			
		
			
		}
	
	
	
	
};

int main(){
	Bank obj;
	obj.addamount();
	obj.addamount(200);
}
 
 
 
