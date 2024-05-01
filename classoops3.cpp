#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		int regno,sub1,sub2,sub3;
		double total,avg;
	
	public:
		/*void show(){
			cout<<"enter student name:";
			cin>>name;
			
			cout<<"enter registration number:";
			cin>>regno;
			
			cout<<"enter student marks";
			cin>>sub1>>sub2>>sub3;
			
		}*/
		
		void show1(string n,int a,int b,int c,int d){
			name=n;
			regno=a;
			sub1=b;
			sub2=c;
			sub3=d;
			
		}
		
		
		 void sum(){
		 	total=sub1+sub2+sub3;
		 	avg=total/3;
		 }
		void display(){
			cout<<"name:"<<name<<endl;
			cout<<"regno"<<regno<<endl;
			cout<<"marks"<<sub1<<" "<<sub2<<" "<<sub3<<" ";
			cout<<"total"<<total<<endl;
			cout<<"avg"<<avg;
		}	
		
};


int main(){
	Student aa;
	aa.show1("ajay",22,3,4,5);
	aa.sum();
	aa.display();
}
