
/*#include<iostream>
 using namespace std;
 
 class Resume{
		string name;
		double p10,p12,pdegree;
		bool working;
		
		
	public:
		Resume(string n,double p1,double p2,double p3,bool w){
			name=n;
			p10=p1;
			p12=p2;
			pdegree=p3;
			working=w;	
		}
		
		void show(){
			cout<<"name:"<<name<<"percentage 10:"<<p10<<"percentege 12:"<<p12<<"percentage degree:"<<pdegree<<"working:"<<working<<endl;
		}
	
	 void update(string nname,double p4,double p5,double p6){
	 	name=nname;
	 	p10=p4;
	 	p12=p5;
	 	pdegree=p6;
	 }
	 
	 
	 void display(){
	 	cout<<"new name:"<<name<<"p10:"<<p10<<"p12:"<<p12<<"pdegree:"<<pdegree<<"working:"<<working;
	 }
		
};

int main(){
	Resume aa("rahul",88,44,55,true);
	aa.show();
	aa.update("jay",55,77,87);
	aa.display();
		
}*/





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




/*6>WAP to create a class  Highest which can
#find highest number amoung 3 numbers.
#data member: int n1,n2,n3,high.
#member function: parameterized_constructor(), highest()*/



#include<iostream>
using namespace std;

class Highest{
	int n1,n2,n3;
	
	public:
		Highest(int a,int b,int c){
			n1=a;
			n2=b;
			n3=c;
			
		}
		
	    void highest(){
	    	
	    	if(n1>n2 && n1>n3){
	    		cout<<"n1 is gretest"<<n1;
			}
	    	
	    	  
	    	else if(n2>n1 && n2>n3){
	    		cout<<"n2 is greates"<<n2;
			}
	    	
	    	
	    	else
	    	cout<<"n3 is greatest"<<n3;
		}
};

int main(){
	Highest aa(2,3,4);
	aa.
}
