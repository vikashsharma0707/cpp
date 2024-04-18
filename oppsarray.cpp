//  array of object
 /*wap to create a array of objects of class student having attribute name,roll,marks.
 define default constructor accordingly.
 display student detail higest marks.*/
 
 
 
#include <iostream>
using namespace std;

class Student{
	public:
		int roll;
		string name;
		double marks;
	public:	
		Student(){
			cout<<"enter roll,name,marks:";
			cin>>roll>>name>>marks;
		}
};


int main(){
	int n;
	cout<<"how many record do u want to print";
	cin>>n;
	Student s[n];
	
	
	for(int i=0;i<n;i++){
		cout<<"name:"<<s[i].name<<"roll:"<<s[i].roll<<"marks"<<s[i].marks;
	}
	
	int high= s[0].marks;
	for(int i=1;i<n;i++){
		if(s[i].marks>high)
		   high =s[i].marks;
	}
	 cout<<high;
}
