#include<iostream>
using namespace std;


class Musicacademy{
	
    public:
    	int eno;
    	string name,styletype,month;
    	float fees;
    	
    	
    	public:
    		 void enrollment(){
		  		cout<<"enter the eno,name,styletype fees and month";
		  		cin>>eno>>name>>styletype;
			  }
			  
			   void display(){
			  	cout<<styletype;
			  }
			  
			  	
    		
    	friend class Exam;
	
};


class Exam{
	public:
		   	  
	   	void checkfees(Musicacademy &obj){
	   	
	  		
	  		if(obj.styletype=="classical"){
	  			cout<<"month is december";
			  }
			  
			else if(obj.styletype=="western"){
				cout<<"month is november";
			}
			
			else if(obj.styletype=="freestyle"){
				cout<<"month is february";
			}	
	  }
	 	  			  
	
};

int main(){
	Musicacademy aa;
	aa.enrollment();
	aa.display();
	Exam bb;
	bb.checkfees(aa);
}

