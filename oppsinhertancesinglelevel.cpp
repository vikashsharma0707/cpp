/*#include <iostream>
using namespace std;

class Person{
	protected:
		string name;
		int age;
		
	public:
		Person(){
			cout<<"enter your name and age:";
			cin>>name>>age;
		}
		
	 };	
		class Employee:public Person{
			
			int eid;
			string department;
			
		public:
			Employee(){
				cout<<"enter eid and department";
				cin>>eid>>department;
			}
			
		void display(){
			
			cout<<name<<" "<<age<<" "<<eid<<" "<<department;
		}	
		};
		
		
	int main(){
		Employee e;
		e.display();
	}*/
	
	
	
	
	
	
	
	
	
	
	
	
#include <iostream>
using namespace std;

class Person{
	protected:
		string name;
		int age;
		
	public:
		Person(){
			cout<<"enter your name and age:";
			cin>>name>>age;
		}
		
		Person(string n, int a){
			name=n;
			age=a;
		}
		
	 };	
		class Employee:public Person{
			
			int eid;
			string department;
			
		public:
			Employee(){
				cout<<"enter eid and department";
				cin>>eid>>department;
			}
			
			Employee(string n,int a, int id,string d):Person(n,a){
				eid=id;
				department=d;
				
			}
			
		void display(){
			
			cout<<name<<" "<<age<<" "<<eid<<" "<<department;
		}
		};
		
		
	int main(){
		Employee e("ajay",11,12,"hr");
		e.display();
	}


