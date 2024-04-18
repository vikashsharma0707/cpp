/*#include<iostream>
using namespace std;

int main(){
	int num=90;
	// double num = 90.90; error throw
	
	if(1){
		double num=90.90;  // scope change
	}
}*/


//wap to add three number and two numbers in the different function having same name 
//here you have to implement function overloading


/*#include<iostream>
using namespace std;

void add(int a,int b){
	cout<<"addition:"<<a+b<<endl;
}

void add(int a,int b,int c){
	cout<<"addition:"<<a+b+c<<endl;
}

void add(double a,int b){
	cout<<"addition:"<<a+b<<endl;
}


int main(){
	add(2,3,4);   //  link----- void add(double,int)
	add(4,5);     //   link----- void add(int,int);
	add(34,5,67); // link-- void add(int,int,int);
}*/







/*#include<iostream>
using namespace std;

void add(int a,int b){
	cout<<"addition:"<<a+b<<endl;
	cout<<"int int "
}

void add(int a,int b,int c){
	cout<<"addition:"<<a+b+c<<endl;
}

void add(double a,int b){
	cout<<"addition:"<<a+b<<endl;
}


int main(){
	
	
	add(45.6,90.8);
	/*add(2,3,4);   //  link----- void add(double,int)
	add(4,5);     //   link----- void add(int,int);
	add(34,5,67); // link-- void add(int,int,int);
}*/








//polymorphism with help of class
/*#include<iostream>
using namespace std;

class Addition{
	
	private:
		int n1,n2;
	
	public:
	    Addition(int a,int b){
	    	n1=a;
	    	n2=b;
		}
		
		void add_with_outsider(int a){
			cout<<a+n1+n2<<endl;
		}
		
		
		void add_with_outsider(double a){
			cout<<a+n1+n2<<endl;
		}	
	
		
};


int main(){
	Addition obj(2,3);
	obj.add_with_outsider(78.0);
}*/





/*#include<iostream>
using namespace std;

class Addition{
	
	private:
		int n1,n2;
	
	public:
	    Addition(int a,int b){
	    	n1=a;
	    	n2=b;
		}
		
		void add_with_outsider(int a){
//			cout<<a+n1+n2<<endl;
             if(n1>n2 && n1>a){
             cout<<"n1 is great";
           }
            else if(n2>n1 && n2>a){
             cout<<"n2 is great";
           }
           
            else{
             cout<<"a is great";
           }
		}
		
		
		void add_with_outsider(double a){
//			cout<<a+n1+n2<<endl;
              if(n1>n2 && n1>a){
             cout<<"n1 is great";
           }
            else if(n2>n1 && n2>a){
             cout<<"n2 is great";
           }
           
            else{
             cout<<"outsider is great";
           }

		}	
	
		
};


int main(){
	Addition obj(2,3);
	obj.add_with_outsider(78.0);
}*/








