
// shallow copy contructor

/*#include<iostream>
using namespace std;

class Student{
	  private:
	string name;
	int age,marks;
	
	
	public:
	   Student(string n,int a,int m){
	   	name=n;
	   	age=a;
	   	marks=m;
	   }
	   
	   void display(){
	   	cout<<"Name:"<<name<<"age:"<<age<<"marks"<<marks<<endl;
	   }
	   
	   
	   Student(Student &obj){
	   	name=obj.name;
	   	age=obj.age;
	   	marks=obj.marks;
	   	// cout<<"explicity code define";
	   }
	
	
}; 


int main(){
	Student s("Aman",34,98);
	s.display();
	Student s1(s);
	s1.display();
}*/




// deep copy constructor
/*#include<iostream>
using namespace std;

class Student{
	  private:
	string name;
	int age,*marks;
	
	
	public:
	   Student(string n,int a,int m){
	   	name=n;
	   	age=a;
	   	marks=new int;
	   	*marks=m;
	   }
	   
	   void display(){
	   	cout<<"Name:"<<name<<"age:"<<age<<"marks"<<*marks<<endl;
	   }
	   
	   
	   Student(Student &obj){
	   	name=obj.name;
	   	age=obj.age;
	   	marks=obj.marks;
	   	 cout<<"explicity code define";
	   }		
}; 

int main(){
	Student s("Aman",34,98);
	s.display();
	Student s1(s);
	s1.display();
}*/




// copy deep shallow



#include<iostream>
using namespace std;

class Student{
	  private:
	string name;
	int age,*marks;
	
	
	public:
	   Student(string n,int a,int m){
	   	name=n;
	   	age=a;
	   	marks=new int;
	   	*marks=m;
	   }
	   
	   void display(){
	   	cout<<"Name:"<<name<<"age:"<<age<<"marks"<<*marks<<endl;
	   }
	   
	   void change_detail(int m){
	   	  *marks=m;
	   }
	   
	   
	   Student(Student &obj){
	   	name=obj.name;
	   	age=obj.age;
	   	marks=new int;
	   	*marks =*obj.marks;
	   }		
}; 

int main(){
	Student s("Aman",34,98);
	Student s1(s);
	s.display();
	s1.display();
	s1.change_detail(60);
	s.display();
	s1.display();

}





