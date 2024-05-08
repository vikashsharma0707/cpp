// static variable + static function
/*#include<iostream>
using namespace std;

class Cybrom{
	public:
		string st_name,course;
		static string institude_name;
				
	public:
		Cybrom(string n,string c){
			st_name=n;
			course =c;
		}
		
		void display(){
			cout<<"Institude name:"<<institude_name<<endl;
			cout<<"name:"<<st_name<<endl;
			cout<<"course:"<<course<<endl;
		}
};

string Cybrom::institude_name="cybrom academy";


int main(){
	Cybrom obj1("raj","phython"),obj2("rahul","java");
	
	obj1.display();
	obj2.display();
	
	// obj1.institude_name="rgpv";     unhralthy coding
	
	Cybrom::institude_name="Cybrom infotrch";
	obj1.display();
	obj2.display();	
}*/






// static variable + static function

// change the address with help of class
/*#include<iostream>
using namespace std;

class Cybrom{
	private:
		string st_name,course;
		static string institude_name,address;
		//static string address;
				
	public:
		Cybrom(string n,string c){
			st_name=n;
			course =c;
		}
		
		void display(){
			cout<<"Institude name:"<<institude_name<<endl;
			cout<<"name:"<<st_name<<endl;
			cout<<"course:"<<course<<endl;
			cout<<"address"<<address<<endl;
		}
		
		static void changeinstitute(string n){
			institude_name=n;	
		}
		
		static void changeaddress(string a){
		         address=a;	
		}
		

};

string Cybrom::institude_name="cybrom academy";
string Cybrom::address= "bhopal";


int main(){
	Cybrom obj1("raj","phython"),obj2("rahul","java");
	
	obj1.display();
	obj2.display();
	
	// obj1.institude_name="rgpv";     unhralthy coding
	
	//Cybrom::institude_name="Cybrom infotrch";
	Cybrom::changeinstitute("cybrom infotech");
	Cybrom::changeaddress("mpnagar");
	obj1.display();
	obj2.display();	
}*/

// static member function
/*#include<iostream>
using namespace std;


class Student{
	private:
		static int count;
		
	public:
		Student(){
			count++;
		}
		
		static void display_count(){
			cout<<"total students:"<<count<<endl;
		}
};

int Student::count;

int main(){
	Student s1,s2,s3;
	Student s4,s5;
	Student::display_count();
}*/



// static data member
/*#include<iostream>
using namespace std;


class Add{
	int a,b;
	static int c;
	
	public:
	void show(int x,int y){
		a=x;
		b=y;
		//c=c+1;
	}
	
	void display(){
		cout<<"a:"<<a<<" b:"<<b<<" c:"<<c;
	}
};

 int Add ::c=2;
 
 int main(){
 	Add aa,bb;
 	aa.show(5,4);
 	aa.display();
 	bb.show(5,6);
 	bb.display();
 }*/
 
 
 
 #include<iostream>
 using namespace std;
 
 class Add{
 	int x;
 	static int y;
 	
 	
 	public:
 		void show(int a){
 			x=a;
		 }
		 
		 static show1(){
		
		 	cout<<"y"<<y;
		 }
		 
		 void display(){
		 	cout<<"x:"<<x<<" y"<<y;
		 }	
 };
 
 int Add::y;
 
 int main(){
 	Add aa;
 	aa.show(4);
 	Add::show1();
 }
















