// normal class 

/*#include<iostream>
using namespace std;

class Max{
	private:
		int a,b,c;
		
	public:
		void max(){
			cout<<"enter three numbers";
			cin>>a>>b>>c;
		}
		
		void display(){
			if(a>b && a>c){
				cout<<"a is greatest"<<a;
			}
			
			else if(b>a && b>c){
				cout<<"b is greatest"<<b;
			}
			
			else{
				cout<<"c is greatest"<<c;
			}
		}
};

int main(){
	Max aa;
	aa.max();
	aa.display();	
}*/




#include<iostream>
using namespace std;

class Max{
	private:
		int a,b,c;
		
	public:
		void max(int d,int e,int f){
			a=d;
			b=e;
			c=f;
		}
		
		void display(){
			if(a>b && a>c){
				cout<<"a is greatest"<<endl;
			}
			
			else if(b>a && b>c){
				cout<<"b is greatest"<<b<<endl;
			}
			
			else{
				cout<<"c is greatest"<<c<<endl;
			}
		}
		
		void add(){
			cout<<"addition of three numbers is"<<a+b+c;
		}
};

int main(){
	Max aa;
	aa.max(2,3,4);
	aa.display();
	aa.add();	
}
