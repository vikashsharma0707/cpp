/*#include<iostream>
using namespace std;

class Add{
	 private:
	 	int a,b;
	 	
	 	public:
	 		void add(){
	 			cout<<"enter two number";
	 			cin>>a>>b;
			 }
			 
			 void display(){
			 	cout<<"addtion of two number is"<<a+b;
			 }
	
};



int main(){
	Add aa;
	aa.add();
	aa.display();
}*/





#include<iostream>
using namespace std;

class Add{
	 private:
	 	int a,b;
	 	
	 	public:
	 		void add(int c,int d){
	 			a=c;
	 			b=d;
			 }
			 
			 void display(){
			 	cout<<"addtion of two number is"<<a+b;
			 }
	
};



int main(){
	int s,f;
	cout<<"enter two numbera";
	cin>>s>>f;
	Add aa(s,f);
	aa.add();
	aa.display();
}







/*#include<iostream>
using namespace std;

class Add {
   int c;
public:

   Add(int a, int b) {
       c = a + b;
   }

   void display() {
       cout << "Sum is:" << c;
   }
};

int main() {

   int a, b;

   cout << "Enter two numbers:";
   cin >> a >> b;

   Add obj(a, b);
   obj.display();

   return 0;
}*/
