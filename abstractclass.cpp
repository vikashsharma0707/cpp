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






/*#include<iostream>
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
	
}*/



/*#include<iostream>
using namespace std;

class Media{
	
	public:
		virtual void play()=0;
	
	void med(){
		cout<<"play music";
	}
};

class Audio:public Media{
	public:
		void play(){
			cout<<"this is play class"<<endl;
		}
		
		void display(){
			cout<<"this is display audio"<<endl;
		}
	
};



class Music:public Media{
	public:
		void play(){
			cout<<"this is music class"<<endl;
		}
		
		void display1(){
			cout<<" this display music class"<<endl;
		}
	
};



int main(){
	Media *p= new Audio;
	p->play();
	
	Media *a= new Music;
	a->play();
	
	/*Audio aa;
	aa.play();
	aa.display();
	
	Music bb;
	bb.play();
	bb.display1();

}*/



#include<iostream>
using namespace std;

class Add{
	public:
		virtual void Addition()=0;
		virtual void Substraction()=0;	
		
		void diaplay(){
			cout<<"addition of two number is:"<<endl;
		}
};


class Add1:public Add{
	public:
		void Addition(){
			cout<<"this add1 class"<<endl;
		}
		
			void Substraction(){
			cout<<"this substraction class"<<endl;
		}
	
};



class Add2:public Add{
	public:
		void Addition(){
			cout<<"this add1 class"<<endl;
		}
		
			void Substraction(){
			cout<<"this substraction class"<<endl;
		}
	
};



int main(){
	/*Add1 aa;
	aa.Addition();
	aa.Substraction();
	
	Add2 bb;
	bb.Addition();
	bb.Substraction();*/
	
	Add *a =new Add1;
	a->Addition();
	a->Substraction();
	a->diaplay();
	
	Add *p = new Add2;
	p->Addition();
	p->Substraction();
	p->diaplay();
}


