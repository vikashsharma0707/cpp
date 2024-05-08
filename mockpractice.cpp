/*#include<iostream>
using namespace std;

class SportsAcademy{
	protected:
	string name,gender,fitnessstatus;
	int age,fitnessscore;
	
	public:
	  SportsAcademy(string n,int a,string g,int f){
	  	    name=n;
	  	    age=a;
	  	    gender=g;
	  	    fitnessscore=f;  
			fitnessstatus=""; 
	  }
	  
	  
	   virtual void playsports(){
	  	cout<<"this is parent class:"<<endl;
	  }
	  
	   virtual void fitnesstest(){
	  	cout<<"this is parent class fitness test:"<<endl;
	  }
	  
	  void display(){
	  	cout<<"name:"<<name<<"age"<<age<<"gender"<<gender<<"fitnessscore"<<fitnessscore<<"fitnessstatus"<<fitnessstatus<<endl;
	  }
};


 class Cricket:public SportsAcademy{
 	public:
 		Cricket(string n,int a,string g,int f): SportsAcademy(n,a,g,f){
 			
		 }
		 
		void playsports(){
	  	cout<<"this is crickte child  class:"<<endl;
	  }
	  
	   void fitnesstest(){
	  	if(fitnessscore>=8){
	  		fitnessstatus="fit";
		  }
		  
		  else{
		  	fitnessstatus="unfit";
		  }
	  }
		 
		 
 };
 
 
 class Badminton:public SportsAcademy{
 	public:
 		Badminton(string n,int a,string g,int f): SportsAcademy(n,a,g,f){
 			
		 }
		 
		void playsports(){
	  	cout<<"this is crickte child  class:"<<endl;
	  }
	  
	   void fitnesstest(){
	  	if(fitnessscore>=10){
	  		fitnessstatus="fit";
		  }
		  
		  else{
		  	fitnessstatus="unfit";
		  }
	  }
		 
		 
 };
 
 
 int main(){
 	SportsAcademy *c =new Cricket("jay",23,"male",9);
 	c->playsports();
 	c->fitnesstest();
 	c->display();
 	
 	SportsAcademy *b= new Badminton("ram",24,"male",10);
 	b->playsports();
 	b->fitnesstest();
 	b->display();
 }*/
 
 
 
 
 #include<iostream>
using namespace std;

class SportsAcademy{
	protected:
	string name,gender,fitnessstatus;
	int age,fitnessscore;
	
	public:
	  SportsAcademy(string n,int a,string g,int f){
	  	    name=n;
	  	    age=a;
	  	    gender=g;
	  	    fitnessscore=f;  
			fitnessstatus=""; 
	  }
	  
	  
	   virtual void playsports(){
	  	cout<<"this is parent class:"<<endl;
	  }
	  
	   virtual void fitnesstest(){
	  	cout<<"this is parent class fitness test:"<<endl;
	  }
	  
	  void display(){
	  	cout<<"name:"<<name<<"age"<<age<<"gender"<<gender<<"fitnessscore"<<fitnessscore<<"fitnessstatus"<<fitnessstatus<<endl;
	  }
	  
	  friend class Nationaltrial;
};


   class Nationaltrial{
   	  public:
   	  	void selection(SportsAcademy &obj){
   	  		
   	  		if(obj.fitnessscore==10){
   	  			cout<<"you are selected";
				 }
				 
			else{
				cout<<"you are not selected";
			}
			 }
   	
   	
   	
   };


 class Cricket:public SportsAcademy{
 	public:
 		Cricket(string n,int a,string g,int f): SportsAcademy(n,a,g,f){
 			
		 }
		 
		void playsports(){
	  	cout<<"this is crickte child  class:"<<endl;
	  }
	  
	   void fitnesstest(){
	  	if(fitnessscore>=8){
	  		fitnessstatus="fit";
		  }
		  
		  else{
		  	fitnessstatus="unfit";
		  }
	  }
		 
		 
 };
 
 
 class Badminton:public SportsAcademy{
 	public:
 		Badminton(string n,int a,string g,int f): SportsAcademy(n,a,g,f){
 			
		 }
		 
		void playsports(){
	  	cout<<"this is crickte child  class:"<<endl;
	  }
	  
	   void fitnesstest(){
	  	if(fitnessscore>=10){
	  		fitnessstatus="fit";
		  }
		  
		  else{
		  	fitnessstatus="unfit";
		  }
	  }
		 
		 
 };
 
 
 int main(){
 	/*SportsAcademy *c =new Cricket("jay",23,"male",9);
 	c->playsports();
 	c->fitnesstest();
 	c->display();
 	
 	SportsAcademy *b= new Badminton("ram",24,"male",10);
 	b->playsports();
 	b->fitnesstest();
 	b->display();*/
 	
 	SportsAcademy *b= new SportsAcademy("ram",24,"male",10);
 	Nationaltrial *n= new Nationaltrial;
 	n->selection(*b);
 	
 }
 
 
 
 
