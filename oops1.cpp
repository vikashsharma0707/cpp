//wap to create a class name employee,data mumber,member function,yaer of service more then 5 years give promotion
// name id salary year gender
//member function
//salary_thismonth(),   promotion(), display
// public specifier   everyone take its access
// for use class use object



/*#include<iostream>
using namespace std;


class Employee{
	public:
	   string name;
	   int eid,year;
	   double salary;
	   char gender;
	   
	   
	   
	   
	   void display(){
	   	cout<<"employee id:"<<endl;
	   	cout<<"Name:"<<name<<"year of service:"<<year<<endl;
	   	cout<<"salary:"<<salary<<"Gender:"<<gender<<endl;
	   }
	   
	   
	   void promotion(){
	   	if(year>5){
	   		cout<<"congrats u got a promotion\n";
	   		salary+=1000;    //salary=salary+10000
	   		cout<<"now ur salary is:"<<salary;
		   }
		   else{
		   	cout<<"soory";
		   }
	   }
};


int main(){
	Employee  e1,e2;
	cout<<"enter id,name,gender,salary,experience1 :";
	cin>>e1.eid>>e1.name>>e1.gender>>e1.salary>>e1.year;
	cout<<"enter id,name,gender,salary,experience2 :";
	cin>>e2.eid>>e2.name>>e2.gender>>e2.salary>>e2.year;
	e1.display();
	e2.display();
	
	
	cout<<"\n\employee 1 promotion detain1\n";
	e1.promotion();
	cout<<"\n\employee 2 promotion detain2\n";
	e2.promotion();
	

	
}*/








//wap to create a class name employee,data mumber,member function,yaer of service more then 5 years give promotion
// name id salary year gender
//member function
//salary_thismonth(),   promotion(), display
// public specifier   everyone take its access
// for use class use object



/*#include<iostream>
using namespace std;


class Employee{
	public:
	   string name;
	   int eid,year;
	   double salary;
	   char gender;
	   
	   
	   employee(){   // default
	   	name="";
	   	eid=0;
		year=0;
		salary=0;
		gender=' ';
		cout<<"constructor call";
	   }
	   
	   
	    void display(){
	   	cout<<"employee id:"<<endl;
	   	cout<<"Name:"<<name<<"year of service:"<<year<<endl;
	   	cout<<"salary:"<<salary<<"Gender:"<<gender<<endl;
	   }
	   
	   
	   void promotion(){
	   	if(year>5){
	   		cout<<"congrats u got a promotion\n";
	   		salary+=1000;    //salary=salary+10000
	   		cout<<"now ur salary is:"<<salary;
		   }
		   else{
		   	cout<<"soory";
		   }
	   }
	   
	   
};


int main(){

    Employee e1;
	e1.display();

}*/














/*#include<iostream>
using namespace std;


class Employee{
	public:
	   string name;
	   int eid,year;
	   double salary;
	   char gender;
	   
	 Employee(){
	cout<<"enter id,name,gender,salary,experience1 :";// default 
	cin>>eid>>name>>gender>>salary>>year;
	 }
	 
	 
	 
	   Employee(int id,string n,char g,double s,int y){  //parameterized
	   	eid=id;
		name=n;
		gender=g;
		salary= s;
		year= y;
	   }
	   
	   
	    void display(){
	   	cout<<"employee id:"<<eid<<endl;
	   	cout<<"Name:"<<name<<"year of service:"<<year<<endl;
	   	cout<<"salary:"<<salary<<"Gender:"<<gender<<endl;
	   }
	   
	   
	   void promotion(){
	   	if(year>5){
	   		cout<<"congrats u got a promotion\n";
	   		salary+=1000;    //salary=salary+10000
}
	   
}
};


int main(){

    Employee e1(101,"ajay",'m',88880,8);
	e1.display();

}*/










// access specifier

// normal function
/*#include <iostream>
using namespace std;
class A{
	private:
		void f1(){
			cout<<"this ia a function of class A";
		}
		
		public:
			void f2(){         // we can take acess of private memeber indirectly  with the help pf public()';
				f1();
			}
};



int main(){
	A obj1;
	obj1.f2();
	
}*/






// function with data 

/*#include <iostream>
using namespace std;
class A{
	int num=90;
	
		
		public:
			void f(){  
			       // we can take acess of private memeber indirectly  with the help pf public()';
			 cout<<num;
			}
};



int main(){
	A obj1;
	obj1.f();
	
}*/






/*#include <iostream>
using namespace std;


class Great{
	
	private:
		int n1,n2,n3;
		public:
			Great(){
				
			}
			
			Great(int a,int b,int c){
				n1=a;
				n2=b;
				n3=c;
			}
			
			void great(){
				if(n1>n2  &&  n1>n3)
				cout<<n1<<"is greatest";
				
				else if(n2>n1  &&  n2>n3)
				cout<<n2<<"is greatest";
				
				else
				cout<<n3<<"is greatest";
		}
		
};


int main(){

    Great g(2,33,4);
	g.great();

}*/






/*#include <iostream>
using namespace std;


class Great{
     int n1,n2 ,n3;
		public:
			Great(){
				cout<<"enter three numbers";
				cout<<"enter first numbers";
				cin>>n1;
					cout<<"enter second numbers";
				cin>>n2;
					cout<<"enter thre numbers";
				cin>>n3;
				
			}
			
			void display(){
				if(n1>n2  &&  n1>n3)
				cout<<n1<<"is greatest";
				
				else if(n2>n1  &&  n2>n3)
				cout<<n2<<"is greatest";
				
				else
				cout<<n3<<"is greatest";
		}
			
};

int main(){
     Great g;
	   g.display();
	   

}*/



/*#include<iostream>
using namespace std;
class Largest{
	
	private:
		int n1,n2,n3;
		
    public:
    	Largest(){
		
    	cout<<"enter three numbers";
    	cout<<"enter first number";
    	cin>>n1;
    	cout<<"enter second  number";
    	cin>>n2;
    	cout<<"enter third number";
    	cin>>n3;
    }
    
    void display(){
    
				if(n1>n2  &&  n1>n3)
				cout<<n1<<"is greatest";
				
				else if(n2>n1  &&  n2>n3)
				cout<<n2<<"is greatest";
				
				else
				cout<<n3<<"is greatest";
		}
			
	
	
};


int main(){
	Largest l;
	l.display();
}*/



#include<iostream>
using namespace std;
class Largest{
	private:
		int n1,n2,n3;
	public:
		
		Largest(int a,int b,int c){
			n1=a;
			n2=b;
			n3=c;
		}
		
		void display(){
				if(n1>n2  &&  n1>n3)
				cout<<n1<<"is greatest";
				
				else if(n2>n1  &&  n2>n3)
				cout<<n2<<"is greatest";
				
				else
				cout<<n3<<"is greatest";
			
		}
	
	
};


int main(){
	Largest l(2,3,4);
	l.display();
}








