
//single inhertance with protected class
/*#include<iostream>
using namespace std;


class Add{
	protected:
	int x;
	
	public:
		void add(){
			cout<<"enter any number";
			cin>>x;
		}	
};

class Badd:public Add{
	
	int y;
	
	
	public:
		void  yadd(){
			cout<<"enter any number";
			cin>>y;
		}
		
		
		void display(){
		   cout<<"addition of two  number is"<<x+y;
		}
	
};




int main(){
	
	
	Badd aa;
	aa.add();
	aa.yadd();
	aa.display();
}*/


/*#include<iostream>
using namespace std;

class Add{
	protected:
	int a;
	 
	 public:
	 	void display(){
	 		cout<<"enter first number";
	 		cin>>a;
		 }
};

class Add1:public Add{
	private:
	int b;
	 
	 public:
	 	void display1(){
	 		cout<<"enter second number";
	 		cin>>b;
		 }
		 
		 
		 void display2(){
		 	cout<<"addition of two number is:"<<a+b;
		 }
};


int main(){
	Add1 aa;
	aa.display();
	aa.display1();
	aa.display2();
	
}*/









// single inheritance with private class
/*#include<iostream>
using namespace std;


class Add{
	int x;
	
	public:
		void add(){
			cout<<"enter any number";
			cin>>x;
		}
		
		int getx()	{
			return x;
		}
};

class Badd:public Add{
	
	int y;
	
	
	public:
		void  yadd(){
			cout<<"enter any number";
			cin>>y;
		}
		
		
		void display(){
		   cout<<"addition of two  number is"<<getx()+y;
		}
	
};




int main(){
	
	
	Badd aa;
	aa.add();
	aa.yadd();
	aa.display();
}*/



#include<iostream>
using namespace std;

class Add{
	
	int a;
	public:
		Add(int c){
			a=c;
		}
			
};

class Add1:public Add{
	
	int b;
	public:
		Add1(int d){
			b=d;
		}
		
		void display(){
			cout<<"addition of two number is:"<<a+b;
		}
			
};

int main(){
	Add1 aa(2);
	aa.Add(2);
	aa.display();
}



