/*1>WAP to create a class  LowestHighest which can inherit class Highest(mentioned above)
#find lowest number amoung 3 numbers.
#with the help of parent class Highest.
#data member: int low.
#member function: parameterized_constructor()-->call parent constructor, lowest()*/


/*#include<iostream>
using namespace std;

class Highest{
	protected:
	int n1,n2,n3;
	
	public:
		Highest(int a,int b,int c){
			n1=a;
			n2=b;
			n3=c;
		}
		
		void highest(){
			if(n1>n2 && n1>n3){
				cout<<"n1 is greater";
			}
			
			else if(n2>n1 && n2>n3){
				cout<<"n2 is greater";
			}
			
			else{
				cout<<"n3 is greater";
			}
			
		}
};


 class LowestHighest:public Highest{
 	int n4, n5, n6;
public:
	LowestHighest(int d,int e,int f):Highest( n1,n2,n3){
		n1=d;
		n2=e;
		n3=f;
	}
	
	
	lowest(){
		if(n1<n2 && n1<n3){
			cout<<"n1 is lowest";
		}
		
		else if(n2<n1 && n2<n3){
			cout<<"n2 is lowest";
		}
		
		else{
			cout<<"n3 is lowest";
		}
	}
 		
 };
 
 int main(){
 	Highest aa(2,3,4);
 	aa.highest();
 	LowestHighest bb(2,3,4);
 	bb.lowest();
 	
	 
 }*/
 
 
 
 /*3>WAP to create a class  StudentPersonal,which can inherit class Student(mentioned above)
#data member: father_name,mother_name,aadhar
#member function: parameterized_constructor()-->call parent constructor,
# display_all().*/




#include<iostream>
using namespace std;

class Student{
	protected:
		int eno;
		string name,address;
		
	public:
		Student(int en,string n,string a){
			eno=en;
			name=n;
			address=a;
		}
		
		void show(){
			cout<<"eno"<<eno<<"name:"<<name<<"address:"<<address<<endl;
		}
};


   class Studentpersonal:public Student{
   	string name;
   	int a;
   	
   	  public:
   	  	Studentpersonal(string n,string n1,int b):Student(eno,name,address){
   	  		  
   	  		     name=n;
   	  		     name=n1;
   	  		     a=b;
   	  		     
			 }
			 
			 void display(){
			 	cout<<"Fathers name:"<<name<<"mothers name:"<<name<<"adhar number:"<<a;
			 }
			 
			 
   };
   
   int main(){
   	  Student aa(22,"rahul","bhoapl");
   	  aa.show();
   	  Studentpersonal bb("fafaf","hha",54465);
   	  bb.display();
   }

