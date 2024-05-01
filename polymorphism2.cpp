#include<iostream>
using namespace std;

class Add{
	   int n1,n2,n3;
	   
	   public:
	       Add(int a,int b){
	       	n1=a;
	       	n2=b;
		   }
		   
		   void add1(int a){
		   	 cout<<a+n1+n2;
		   }
		   
		   void add2(double a){
		   	cout<<a+n1+n2;
		   }
	
	
};

int main(){
	Add aa(2,3);
	//aa.add1(4);
	aa.add2(5);
}
