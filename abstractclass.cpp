/*1.Abstreact class:  design creationl model
it is a designing approch in which abstract class is given with some pure virtual function and a few implemented functon,

developer have to create a child of this abstact class, and defien (implement) all pure virtual fun() in respective child class */
/* note:
1.we can't create an instance of a abstract class.'
2. but we can create pointer object.
3.you have to define all pure virtual function in child class.*/


/*#include<iostream>
using namespace std;

class RBI{
	public:
		virtual void interest()=0;
		virtual void reporate()=0;
		// 2 pure virtul f() declare
		
		void information(){
			cout<<"interest rate should be difined by respective bank\n";
		}
	
};


class SBI:public RBI{
	public:
		void interest(){
			cout<<"SBI interest rate is 5% \n";
		}
		
		void reporate(){
			cout<<"SBI repo rate is 8%\n";
		}	
	
};



int main(){
	RBI *p =new SBI;
	p->interest();
	p->reporate();
}*/






#include<iostream>
using namespace std;



class Media{
	public:
	virtual void play()=0;
	
	
	
};


class Audio:public Media{
	void play(){

	cout<<"this play audia class\n";
		}
};

class Viedeo:public Media{
	void play(){

	cout<<"this is viedeo play";
		}
	
};





int main(){
	Media *p =new Audio;
	p->play();
	
	Media *r=new Viedeo;
	r->play();
	
}


