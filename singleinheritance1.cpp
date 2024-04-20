
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









// single inheritance with private class
#include<iostream>
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
}
