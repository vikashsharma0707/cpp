/*#include<iostream>
using namespace std;


class Student{
	
	private:
		int marks;
	public:
		Student(int m){
			marks=m;
		}
		
		void display(){
			cout<<marks<<endl;
		}
		
		void operator + (Student obj){    // s.operator+(s1)-->       // obj = s1
			cout<<marks<<endl;           //  marks = (s ke marks)
			cout<<obj.marks;             //   obj.marks = s1.marks
			cout<<"here we define some definition";
			cout<<"total:"<<marks+obj.marks;
		}
		
	
};


int main(){
	Student s(23),s1(78);
	s+s1;     //  s.operator+(s1)
	
}*/








// wap to perform operator overloading in which we are going to overload +operator such that it gives class total of all students.



/*#include<iostream>
using namespace std;

class Student{
	int marks;
 public:
 	Student (int a){
      marks=a;
	 }
	 
	 
	 void display(){
	 	cout<<marks<<endl;
	 }
	 
	 
	 Student operator +(Student ob){
	 	Student temp(0);
	 	temp.marks=marks+ob.marks;
	 	return temp;
	 }
		
	
};


int main(){
	Student s1(23),s2(67),s3(55),s4(90);
	Student result = s1+s2+s3+s4;
	
	result.display();
}*/






#include<iostream>
using namespace std;

class Student{
	int marks;
	int high;
 public:
 	Student (int a){
// 	int marks;
      marks=a;
      high=0;
	 }
	 
	 void display(){
	 	cout<<marks<<endl;
	 	cout<<high<<endl;
	 }
	 
	 
	 Student operator +(Student ob){
	 	Student temp(0);
	 	
	 	temp.marks=marks+ob.marks;
	 
	 	return temp;
	
	 }
	 
	 Student operator<(Student ob){
	 		Student high;
	 	if(marks>ob.marks  && marks>temp){
	 		high=marks;
		 }
		 else if(ob.marks>marks  &&  ob.marks>temp){
		 	high=ob.marks;
		 }
		 else{
		      high=temp;
		 }
	 	return temp;
	 }
	 
		
	
};


int main(){
	Student s1(23),s2(67),s3(55),s4(90);
	Student result = s1+s2+s3+s4;
	


}
