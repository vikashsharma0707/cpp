/*#include<iostream>
using namespace std;

class Add{
	protected:
	int x;
	  public:
	  	void show(int a){
	  		x=a;
		  }
};

class Add1:public Add{
	
	int y;
	  public:
	  	void show1(int b){
	  		y=b;
		  }
		  
		  void display(){
		  	cout<<"additon of two number is:"<<x+y;
		  }
};

int main(){
	Add1 aa;
	aa.show(2);
	aa.show1(5);
	aa.display();
	
}*/




/*#include<iostream>
using namespace std;

class Add{
	protected:
		int a;
		
		public:
			void show(int x){
				a=x;
			}
};


class Add1{
	protected:
		int b;
		
		public:
			void show1(int y){
				b=y;
			}
};

class Add2:public Add,public Add1{
	
	public:
		int c;
		 void Show2(int z){
		 	c=z;
		 }
		 
		 void display(){
		 	cout<<"addition of two number is:"<<a+b+c;
		 }
};


int main(){
	Add2 aa;
	aa.show(2);
	aa.show1(3);
	aa.Show2(4);
	aa.display();
}*/



/*#include<iostream>
using namespace std;

class Add{
	protected:
	int a;
	
	public:
		void show(int x){
			a=x;
		}
};

class Add1:public Add{
	protected:
	int b;
	
	public:
		void show1(int y){
			b=y;
		}
};

class Add2:public Add1{
	protected:
	int c;
	
	public:
		void show2(int z){
			c=z;
		}
		
		void display(){
			cout<<"addition of two number is:"<<a+b+c;
		}
};

int main(){
	Add2 aa;
	aa.show(2);
	aa.show1(3);
	aa.show2(4);
	aa.display();
}*/





/*#include<iostream>
using namespace std;

class Add{
	protected:
	int x;
	public:
	void show(int a){
		x=a;
	}
};

class Add1:public Add{
	public:
	int y;
	
	void show1(int b){
		y=b;
	}
	
	void display(){
		cout<<"addition of two number is:"<<x+y;
	}
};


class Add2:public Add{
	public:
	int z;
	
	void show1(int c){
		z=c;
	}
	
	void display1(){
		cout<<"addition of two number is:"<<x+z;
	}
};


int main(){
	Add1 aa;
	aa.show(4);
	aa.show1(2);
	aa.display();
	
	Add2 bb;
	bb.show(5);
	bb.show1(3);
	bb.display1();
	
}*/


#include<iostream>
using namespace std;

class Add{
	public:
		void show(){
			cout<<"this is parent class"<<endl;
		}
		void display(){
			cout<<"this is parent class"<<endl;
		}
		
};

class Add1:public Add{
	public:
		void show1(){
			cout<<"this is Add1 class"<<endl;
		}
		
};


class Add2{
	public:
		void show2(){
			cout<<"this is Add2 class"<<endl;
		}
		
};

class Add3:public Add1,public Add2{
	public:
		void show3(){
			cout<<"this is Add2 class"<<endl;
		}
};


int main(){
	Add3 aa;
	aa.show();
	aa.display();
	aa.show1();
	aa.show2();
	aa.show3();

}




