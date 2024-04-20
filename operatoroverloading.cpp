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




// gretest number by operator overloading
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
	 	if(marks>ob.marks)
	 	    temp.marks=marks;
	 	else
	 	   temp.marks=ob.marks;
	 	   return temp;
	 	
	 	
	 }
		
	
};


int main(){
	Student s1(23),s2(67),s3(55),s4(90);
	Student result = s1+s2+s3+s4;
	
	result.display();
}*/





// lowest number by operator overloading
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
	 	if(marks<ob.marks)
	 	    temp.marks=marks;
	 	else
	 	   temp.marks=ob.marks;
	 	   return temp;
	 	
	 	
	 }
		
	
};


int main(){
	Student s1(23),s2(67),s3(55),s4(90);
	Student result = s1+s2+s3+s4;
	
	result.display();
}*/






// multiplication number by operator overloading
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
	 
	 
	 Student operator *(Student ob){
	 	Student temp(0);
	 	temp.marks=marks*ob.marks;
	 	return temp;
	 
	 	
	 }
		
	
};


int main(){
	Student s1(23),s2(67),s3(55),s4(90);
	Student result = s1*s2*s3*s4;
	
	result.display();
}*/




// gretest number by operator overloading
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
	 	if(marks>ob.marks)
	 	    temp.marks=marks;
	 	else
	 	   temp.marks=ob.marks;
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
 public:
 	/*Student (int a){
      marks=a;
	 }*/
	 
	 void react(){
	 	cout<<"enter the marks";
	 	cin>>marks;
	 }
	 
	 
	 void display(){
	 	cout<<marks<<endl;
	 }
	 
	 
	 Student operator ++(){
	 	marks=marks+10;
	 	
	 }
		
	
};


int main(){
	Student s1;
	s1.react();
	s1.display();
	++s1;
	cout<<"original value ";
	s1.display();
	
	
	
}
	

	








// wap to overload prifix increment operator ++,such that it will increment the value of marks of a student by 10.
// student s1(23);
/*++s1;
s1.display();*/
