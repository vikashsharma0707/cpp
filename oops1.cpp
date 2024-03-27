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














#include<iostream>
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

}
