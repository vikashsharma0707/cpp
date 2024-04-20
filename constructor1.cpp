
// default constructor
/*#include<iostream>
using namespace std;

class Add{
	int a,b,sum=0;
	
	public:
		Add(){
			cout<<"enter fisrt number";
			cin>>a;
			cout<<"enter second number";
			cin>>b;
		}
		
		void add(){
			sum=a+b;
		}
		void display(){
			cout<<"addtion of two numbers is "<<sum;
		}
	
	
};

int main(){
	Add aa;
	aa.add();
	aa.display();
}*/





// parameter constructor with numbers and taking numbers from user
#include<iostream>
using namespace std;

class Add{
	
	private:
		int a,b,sum=0;
		
		public:
			Add(int c,int d){
				a=c;
				b=d;
			}
			
			void add(){
				sum=a+b;
			}
			
			void display(){
				cout<<"the addition of two number is"<<sum;
			}
		
}; 



int main(){
	/*Add aa(2,3);
	aa.add();
	aa.display();*/
	
	
	int x,y;
	cout<<"enter two numbers";
	cin>>x>>y;
	
	Add aa(x,y);
	aa.add();
	aa.display();
}
