#include<iostream>
using namespace std;

class Student{
	int marks;
	public:
		
		Student(){
			cout<<"enter marks";
			cin>>marks;
		}
		Student(int a){
			marks=a;
		}
		void display(){
			cout<<marks<<endl;
		}
		Student operator *(Student ob){
			Student temp(0);
				if(marks>ob.marks)
	 	    temp.marks=marks;
	 	    else
	 	   temp.marks=ob.marks;
	 	   return temp;
			//temp.marks=marks*ob.marks;

			
		}
	
};

int main(){
	Student s1(45),s2(55),s3(7);
	Student result=s1*s2*s3;
	result.display();
	
	
}
