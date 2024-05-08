/*#include<iostream>
using namespace std;

class A{
	int a,b;
	
	public:
		void setdata(int x,int y){
			a=x;
			b=y;	
		}
		
		friend void Add(A p);
};

void Add(A p){
	cout<<p.a+p.b;
}

int main(){
	A aa;
	aa.setdata(2,3);
	Add(aa);
}*/



/*#include<iostream>
using namespace std;

class Add{
    int a,b;
    
    public:
    	setvalue(int x,int y){
    		a=x;
    		b=y;
		}
		
		void printvalue(){
			cout<<"addtion of two value is: "<<a<<"+"<<b<<"+"<<"i";
		}
		
		friend  Add Complex(Add o1,Add o2);
		
		

};

   Add Complex(Add o1,Add o2){
 	Add o3;
 	o3.setvalue((o1.a+o2.a),(o1.b+o2.b));
 	return o3;
 }
 
 int main(){
 	Add c1,c2,sum;
 	c1.setvalue(2,3);
 	c1.printvalue();
 	c2.setvalue(3,4);
 	c2.printvalue();
 	sum=Complex(c1,c2);
 	sum.printvalue();
 	
 }*/
 
 
// individualy decleration of friend function
 
 /*#include<iostream>
 using namespace std;
 // forward decleration 
 class Main;
 class Add{
 	public:
 		int add(int a,int b){
 			return a+b;
		 }
		 
		int Complex(Main,Main);
		int  Complex1(Main,Main);
 	
 };
 
 
 class Main{
 	   int a,b;
 	   
 	   
 	   public:
 	   	void setvalue(int n1,int n2){
 	   		a=n1;
 	   		b=n2;
			}
			
		void display(){
			cout<<"addition of two number is"<<a<<"+"<<b<<"i";
		}
		// individually declaring friend function
		friend int Add :: Complex(Main,Main);
		friend int Add :: Complex1(Main,Main);
		
		
 };
 
 int Add :: Complex(Main o1,Main o2){
 	return ((o1.a+o2.a),(o1.b+o2.b));
 }
 
 int Add :: Complex1(Main o1,Main o2){
 	return ((o1.a+o2.a),(o1.b+o2.b));
 }


int main(){
	Main o1,o2;
	o1.setvalue(2,3);
	o2.setvalue(4,5);
	Add aa;
	int result=aa.Complex(o1,o2);
	cout<<result;
	
	int result1=aa.Complex1(o1,o2);
	cout<<result1;
	
}*/



// declaering entire Add class as frined function
 
 #include<iostream>
 using namespace std;
 // forward decleration 
 class Main;
 class Add{
 	public:
 		int add(int a,int b){
 			return a+b;
		 }
		 
		int Complex(Main,Main);
		int  Complex1(Main,Main);
 	
 };
 
 
 class Main{
 	   int a,b;
 	   
 	   
 	   public:
 	   	void setvalue(int n1,int n2){
 	   		a=n1;
 	   		b=n2;
			}
			
		void display(){
			cout<<"addition of two number is"<<a<<"+"<<b<<"i";
		}
		// individually declaring friend function
		/*friend int Add :: Complex(Main,Main);
		friend int Add :: Complex1(Main,Main);*/
		
		friend class Add;
		
 };
 
 int Add :: Complex(Main o1,Main o2){
 	return ((o1.a+o2.a),(o1.b+o2.b));
 }
 
 int Add :: Complex1(Main o1,Main o2){
 	return ((o1.a+o2.a),(o1.b+o2.b));
 }


int main(){
	Main o1,o2;
	o1.setvalue(2,3);
	o2.setvalue(4,5);
	Add aa;
	int result=aa.Complex(o1,o2);
	cout<<result;
	
	int result1=aa.Complex1(o1,o2);
	cout<<result1;
	
}

 
