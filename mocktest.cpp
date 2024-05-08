/*#include<iostream>
using namespace std;

class Sportsacademy{
	
	public:
		string name,gender,fitness_status;
		int age, fitness_score;
	
	Sportsacademy(string n,string g,int a,int f ){
		name=n;
		gender=g;
		age=a;
		fitness_score=f;
		fitness_status="";
		
	}
	
	 virtual void playsprots(){
		cout<<"this is parent class";
	}
	
	 virtual void fitness_test(){
		cout<<"this is fitness parent class";
	}
	
   void display(){
   	cout<<"player name: "<<name<<" gender:"<<gender<<"age: "<<age<<"fitnessscore "<<fitness_score<<" fitness_status:"<<fitness_status<<endl;
   }	
	
};



class Cricket:public Sportsacademy{
	 public:
	 Cricket(string n,string g,int a,int f):Sportsacademy(n,g,a,f){
	 	
	 }
	 
	void playsprots(){
		cout<<"this is parent class";
	}
	
	void fitness_test(){
		if(fitness_score>=4){
			fitness_status="fit";
		}
		
	else if(fitness_score<=10){
		fitness_status="unfit";
		}
	}
	
	
	
};



class Badminton:public Sportsacademy{
	 public:
	 Badminton(string n,string g,int a,int f):Sportsacademy(n,g,a,f){
	 	
	 }
	 
	void playsprots(){
		cout<<"this is parent class";
	}
	
	void fitness_test(){
		if(fitness_score>=8){
			fitness_status="fit";
		}
		
	else if(fitness_score<=10){
		fitness_status="unfit";
		}
	}
	
	
	
};


int main(){
	cout<<"class Cricket";
    Cricket aa("raj","male",8,24);
    aa.fitness_test();
    aa.display();
    
    cout<<"class Badminton";
    Badminton bb("raj","male",8,24);
    bb.fitness_test();
    aa.display();
    
    
    
    /*cout<<"class Cricket";
    Cricket *c=new Cricket("jay","male",23,9);
	c->fitness_test();
	c->display();
	
	cout<<"class Badminton";
	Badminton *b =new Badminton("jay","male",23,5);
	b->fitness_test();
	b->display();
}*/





#include<iostream>
using namespace std;

class Sportsacademy{
	
	public:
		string name,gender,fitness_status;
		int age, fitness_score;
	
	Sportsacademy(string n,string g,int a,int f ){
		name=n;
		gender=g;
		age=a;
		fitness_score=f;
		fitness_status="";
		
	}
	
	 virtual void playsprots(){
		cout<<"this is parent class";
	}
	
	 virtual void fitness_test(){
		cout<<"this is fitness parent class";
	}
	
   void display(){
   	cout<<"player name: "<<name<<" gender:"<<gender<<"age: "<<age<<"fitnessscore "<<fitness_score<<" fitness_status:"<<fitness_status;
   }
   
   friend class Nationaltrial;	
	
};


 class Nationaltrial{
 	public:
 	void selection(Sportsacademy &obj){
 		if(obj.fitness_score==10){
 			cout<<"you are selected";
		 }
		 
		 else{
		  cout<<"you are not selected";
		 }
	 }
	 
 };


class Cricket:public Sportsacademy{
	 public:
	 Cricket(string n,string g,int a,int f):Sportsacademy(n,g,a,f){
	 	
	 }
	 
	void playsprots(){
		cout<<"this is parent class";
	}
	
	void fitness_test(){
		if(fitness_score>=4){
			fitness_status="fit";
		}
		
	else if(fitness_score<=10){
		fitness_status="unfit";
		}
	}
	
	
	
};



class Badminton:public Sportsacademy{
	 public:
	 Badminton(string n,string g,int a,int f):Sportsacademy(n,g,a,f){
	 	
	 }
	 
	void playsprots(){
		cout<<"this is parent class";
	}
	
	void fitness_test(){
		if(fitness_score>=8){
			fitness_status="fit";
		}
		
	else if(fitness_score<=10){
		fitness_status="unfit";
		}
	}
	
	
	
};


int main(){
    /*Cricket aa("raj","male",8,24);
    aa.fitness_test();
    aa.display();*/
    
    Sportsacademy aa("jay","male",23,67);
    Sportsacademy *p = new Sportsacademy ("jay","male",23,67);
    Nationaltrial *a= new Nationaltrial;
    a->selection(*p);
    
    
		
}







