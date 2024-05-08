
// shallow copy constructor
/*#include<iostream>
using namespace std;

class Add{
	int a;
	
	public:
		Add(int b){
			a=b;
		}
		
		Add(Add &obj){
			a=obj.a;
		}
		
		void display(){
			cout<<"a:"<<a<<endl;
		}
};

int main(){
	Add aa(10);
	aa.display();
	Add bb(aa);
	bb.display();
}*/


// deep copy constructor


#include<iostream>
using namespace std;

class Add{
	
	string name;
	int age,*marks;
	
	public:
		Add(string n,int a,int m){
			name=n;
			age=a;
			marks=new int;
			*marks=m;
		}
		
		void display(){
			cout<<"name:"<<name<<" age:"<<age<<" marks:"<<*marks<<endl;
		}
		
		void changedetail(int m){
			*marks= m;
		}
		
		Add(Add &obj){
			name= obj.name;
			age=obj.age;
			marks=new int;
			*marks= *obj.marks;
		}
		
};

int main(){
	Add aa("jay",22,98);
	Add bb(aa);
	aa.display();
	bb.display();
	bb.changedetail(99);
	bb.display();
}
