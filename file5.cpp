/*1.	Create a hierarchy of shapes (e.g., Circle, Square, Triangle) using inheritance.
 Implement a virtual function calculateArea() in the base class, and override it in each derived class.
  Demonstrate polymorphism by creating an array of shapes and calling calculateArea() on each element.*/
  
  /*#include<iostream>
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
			
		virtual void calculateArea(){
			cout<<"area calculated here";
		}
  };
  
  class Circle:public Shapes{
  	 public:
  	 	Circle(int a):Shapes(a){
  	 		
		   }
		   
		 void calculateArea(){
		 	cout<<"area of circle is"<<3.14*d1*d1;
		 }
  };


 class Square:public Shapes{
  	 public:
  	 	Square(int a):Shapes(a){
  	 		
		   }
		   
		 void calculateArea(){
		 	cout<<"area of Square is"<<d1*d1;
		 }
  };
  
  
  class Triangle:public Shapes{
  	 public:
  	 	Triangle(int a,int b):Shapes(a,b){
  	 		
		   }
		   
		 void calculateArea(){
		 	cout<<"area of triangle is"<<1/2.0*d1*d2;
		 }
  };
  
  int main(){
  	Shapes *C =new Circle(3);
  	Shapes *S =new Square(5);
  	Shapes *T =new Triangle(10,20);
  	
  	Shapes *Ar[3] ={C,S,T};
  	for(int i=0;i<=3;i++){
  		Ar[i]->calculateArea();
	  }
  	
  	
  }*/
  
  
  
  
  /*2.Numbers Define a class for complex numbers in C++. Implement operator overloading for
   addition, subtraction, multiplication, and division. Use these overloaded operators to perform
    operations on complex numbers. Create a program that takes user input for two complex 
	numbers and performs various operations using the overloaded operators.*/
	
	
	
	/*#include<iostream>
	using namespace std;
	
	
	class Complex{
		int a,b;
		
		public:
			Complex(int n1,int n2){
				a=n1;
				b=n2;
			}
			
			void display(){
				cout<<"Additon of two number is"<<a<<"+"<<b<<"i"<<endl;
				cout<<"Additon of two number is"<<a<<"-"<<b<<"i"<<endl;
				cout<<"Additon of two number is"<<a<<"*"<<b<<"i"<<endl;
			}
			
			Complex operator +(Complex &obj){
				Complex temp(0,0);
				temp.a=a+obj.a;
				temp.b=b+obj.b;
				return temp;
			}
			
				Complex operator -(Complex &obj){
				Complex temp(0,0);
				temp.a=a-obj.a;
				temp.b=b-obj.b;
				return temp;
			}
			
				Complex operator *(Complex &obj){
				Complex temp(0,0);
				temp.a=a*obj.a;
				temp.b=b*obj.b;
				return temp;
			}
			
				Complex operator /(Complex &obj){
				Complex temp(0,0);
				temp.a=a/obj.a;
				temp.b=b/obj.b;
				return temp;
			}
	};
	
	int main(){
		Complex c(2,3),c1(4,5);
		Complex result=c+c1;
		result.display();
		
	
		Complex result1=c-c1;
		result1.display();
		
		Complex result2=c*c1;
		result2.display();
		
		Complex result3=c/c1;
		result3.display();
	}*/
	
	
	/*3.	Create an abstract class BankAccount with pure virtual functions for
	 deposit, withdrawal, and display. Implement two derived classes, SavingsAccount and CheckingAccount,
	  each with their own versions of the virtual functions. Demonstrate abstraction by using pointers to the 
	  base class to perform operations on objects of the derived classes.*/
	  
	  
	  
	/*#include<iostream>
	using namespace std;
	
	class Bankaccount{
		protected:
		double bal;
		
		public:
			Bankaccount(double b ){
				bal=b;
			}
			
			virtual void deposit()=0;
			virtual void withdrawal()=0;
			virtual void display()=0;
			
	};
	
	
	class Savingaccount:public Bankaccount{
		public:
			Savingaccount(double b):Bankaccount(b){
				
			}
			
			void deposit(){
				int n;
				cout<<"how much money do you want to deposit:"<<endl;
				cin>>n;
				bal=bal+n;
			}
			
			void withdrawal(){
				int m;
				cout<<"how much money do you want to withdraw:"<<endl;
				cin>>m;
				bal=bal-m;;
			}
			
			void display(){
				cout<<bal<<endl;
			}
			
			
	};
	
	
	class Checkingaccount:public Bankaccount{
		public:
			
			Checkingaccount(double b):Bankaccount(b){
				
			}
			
			
				void deposit(){
				int n;
				cout<<"how much money do you want to deposit:"<<<<endl;
				cin>>n;
				bal=bal+n;
			}
			
			void withdrawal(){
				int m;
				cout<<"how much money do you want to withdraw:"<<endl;
				cin>>m;
				bal=bal-m;;
			}
			
			void display(){
				cout<<bal<<endl;
			}
			
			
	};
	
	
	int main(){
		Bankaccount *p = new Savingaccount(1000);
		p->deposit();
		p->display();
		p->withdrawal();
		p->display();
		
		
		Bankaccount *c = new Checkingaccount(10000);
		c->deposit();
		c->display();
		c->withdrawal();
		c->display();
		
	}*/
	
	
	
	/*4.Create a base class Animal with virtual functions for makeSound() and move().
	 Implement derived classes such as Dog, Cat, and Bird. Override the virtual functions
	  in each derived class to represent the specific sounds and movements of each animal. 
	  Use polymorphism to create an array of animals and call their respective functions.*/
	  
	  
	  /*#include<iostream>
	  using namespace std;
	  
	  class Animal{
	  	protected:
	  		string name,sound;
	  		int nolegs;
	  		
	  		public:
	  			Animal(string n,string s,int l){
	  				name=n;
	  				sound=s;
	  				nolegs=l;
				  }
				  
				  virtual void makesound(){
				  	cout<<"sound of animal";
				  }
				  
				   virtual void move(){
				  	cout<<"sound of animal";
				  }
				  
				  void display(){
				  	cout<<"name:"<<name<<" sound:"<<sound<<" nolegs:"<<nolegs<<endl;
				  }
	  };
	  
	  
	  class Dog:public Animal{
	  	   public:
	  	   	Dog(string n,string s,int l):Animal(n,s,l){
	  	   		
				 }
				 
			void makesound(){
				cout<<"this is dog sound"<<endl;
			}
			
			void move(){
				cout<<"dog move with four legs"<<endl;
			}
	  };
	  
	   class Cat:public Animal{
	  	   public:
	  	   	Cat(string n,string s,int l):Animal(n,s,l){
	  	   		
				 }
				 
			void makesound(){
				cout<<"this is cat sound"<<endl;
			}
			
			void move(){
				cout<<"cat move with four legs"<<endl;
			}
	  };
	  
	  
	   class Birds:public Animal{
	  	   public:
	  	   	Birds(string n,string s,int l):Animal(n,s,l){
	  	   		
				 }
				 
			void makesound(){
				cout<<"this is birds sound"<<endl;
			}
			
			void move(){
				cout<<"birds move with two legs"<<endl;
			}
	  };
	  
	  
	  int main(){
	  	
	  	/*Dog aa("Dog","bhow",4);
	  	aa.makesound();
	  	aa.move();
	  	aa.display();*/
	  	
	  	/*Animal *D =new Dog("Dog","bhow",4);
	  	Animal *C =new Cat("Cat","meow",4);
	  	Animal *B =new Birds("birds","chiw",2);
	  	
	  	Animal *Ar[3]={D,C,B};
	  	for(int i=0;i<=3;i++){
	  		Ar[i]->makesound();
	  		Ar[i]->move();
	  		Ar[i]->display();
		  }
	  }*/
	  
	  
	  
	  
	  
	  
	  /*5.Create a base class Employee with attributes like name, ID, and a virtual function displayDetails().
	   Derive classes such as Manager and Engineer from the base class. Override the displayDetails() 
	   function in each derived class to showcase different information. 
	   Use inheritance to model the employee hierarchy*/
	   
	   
	   
	   #include<iostream>
	   using namespace std;
	   
	   class Employee{
	   	protected:
	   	   string name;
	   	   int id;
	   	   
	   	   public:
	   	   	 Employee(string n,int i){
	   	   	 	name=n;
	   	   	 	id=i;
		    }
		    
		    virtual void displayDetail(){
		    	cout<<"name:"<<name<<" id"<<id<<endl;
			}
	   };
	   
	   class Manager:public Employee{
	   	public:
	   		int age;
	   		Manager(string n,int i,int a):Employee(n,i){
			      age=a;
			   }  
			   void displayDetail(){
			     cout<<"name:"<<name<<" id:"<<id<<" age"<<age<<endl;
			   }
	   };
	   
	   
	   class Engineer:public Employee{
	   	  public:
	   	  	int salary;
	   	  	Engineer(string n,int i,int s):Employee(n,i){
	   	  		salary=s;
				 }
				 
				 void displayDetail(){
				 	cout<<"name:"<<name<<" id"<<id<<" salary:"<<salary<<endl;
				 }
	   };
	   
	   
	   int main(){
	   	/*Manager aa("jay",155,24);
	   	aa.displayDetail();
	   	aa.Employee::displayDetail();*/
	   	
	   	
	   	Employee *M =new Manager("jay",15,24);
	   	M->displayDetail();
	   	
	   	Employee *E =new Engineer("ram",30,100000);
	   	E->displayDetail();
	   	
	   }

	  

