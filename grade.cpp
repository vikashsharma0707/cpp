/*5)WAP to create a class  Student . that accepts marks (out of 100)
 of five subjects from user and calculate the 
#private data member: 5 int variable, 1 double variable percentage,
 1 char variable Grade,student_name.
calculate_grade()
percentage >=60 Grade A
percentage >=50 Grade B
percentage >=40 Grade C
percentage  <40 Grade D
calculate_per()
#member function: constructor()-->5 marks+calculate_per(),display_grade()*/


#include<iostream>
using namespace std;

class Student{
	private:
		int s1,s2,s3,s4,s5;
		string name;
		double p;
		char grade;
		
		public:
		   Student(int a,int b,int c,int d,int e,string n,double per){
		   	s1=a;
		   	s2=b;
		   	s3=c;
		   	s4=d;
		   	s5=e;
		   	name=n;
		   	
		   }
		   
		   
		   
		void calulategrade(){
			int s;
			p=(s1+s2+s3+s4+s5)*100/s;
		}
		
		void calculategrade1(){
			if(p>=60){
				grade='A';
			}
			
			else if(p>=50){
				grade='B';
			}
			
			else if(p>=40){
				grade='C';
			}
			
			else if(p<40){
				grade='B';
			}
		}
		
		
		void display(){
			/*cout<<"enter the marks of student:"<<endl;
			cout<<"s1"<<s1<<"s2"<<s2<<"s3"<<s3<<"s4"<<s4<<"s5"<<s5<<endl;*/
			cout<<"name:"<<name;
			cout<<"per"<<p<<endl;
			cout<<grade;
		}
};


int main(){
	Student aa(22,33,44,55,66,"ss");
	
	aa.calulategrade();
	aa.calculategrade1();
	aa.display();
	
	
}
