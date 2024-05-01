/*Q.1)Define a class MusicAcademy in C++ with following description :
Private Members
Enrollno of type int
Name of type string
Style of type string
Fee of type float
A member function chkfee() to assign the value of fee variable 
according to the style entered by the user according to the criteria as given below :
Style	                                Fee
Classical	                10000
Western	                 8000
Freestyle	                11000
Public Members
A function enrollment () to allow users to enter values for Enrollno, Name, Style and call
function chkfee()to assign value of fee variable according to the Style entered by the user.
A function display () to allow users to view the details of all the data members.*/



/*#include<iostream>
using namespace std;

class Musicacademy{
	  private:
	  	int eno;
	  	string name,stylet;
	  	float fees;
	  	
	  	void checkfees(){
	  		string n;
	  		cout<<"enter the dance style"<<" ";
	  		cin>>n;
	  		
	  		if(n=="classical"){
	  			fees=10000;
			  }
			  
			  else if(n=="western"){
			  	fees=8000;
			  }
			  
			  else if(n=="freestyle"){
			  	fees=11000;
			  }
		  }
		  public:
		  	void enrollment(){
		  		cout<<"enter the eno,name,styletype and fees";
		  		cin>>eno>>name>>stylet;
		  		checkfees();
			  }
			  
			  void display(){
			  	cout<<fees;
			  }
			  
	
};

int main(){
	Musicacademy aa;
	aa.enrollment();
	aa.display();
}*/

/*Q.2) What is Friend class ? Create a Friend class named ExamMusicAcademy of the above class 
mentioned in Q.1, and shows the exam details of the object of MusicAcademy shown below.
Style	                             exam on
Classical	                December
Western	                november
Freestyle	                febrary
display month only (not have to create any data member ,use if-else)*/



#include<iostream>
using namespace std;


class Musicacademy{
	
    private:
    	int eno;
    	string name,styletype,month;
    	float fees;
    	
    	
    	public:
    		 void enrollment(){
		  		cout<<"enter the eno,name,styletype fees and month";
		  		cin>>eno>>name>>styletype;
			  }
			  
			   void display(){
			  	cout<<fees;
			  }	
		
    		
    		
    		
    	friend class Exam;
	
};


class Exam{
	public:
		   	  
	   	void checkfees(Musicacademy &obj){
	  		string n;
	  		cout<<"enter the dance style"<<" ";
	  		cin>>n;
	  		
	  		if(n=="classical"){
	  			cout<<"month is december";
			  }
			  
			else if(n=="western"){
				cout<<"month is november";
			}
			
			else if(n=="freestyle"){
				cout<<"month is february";
			}
	  	
		  		obj.n = fees;  
	
};

int main(){
	Musicacademy aa;
	aa.enrollment();
	aa.display();
	Exam bb;
	bb.checkfees(aa);	
}

