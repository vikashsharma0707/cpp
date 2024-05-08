/*#include<iostream>
using namespace std;

class Bank{
	private:
		int acc_num;
		double bal;
		string name;
		
	public:
		Bank(int a,double b,string n){
			acc_num=a;
			bal=b;
			name=n;
		}
		
		void display(){
			cout<<"account number:"<<acc_num<<endl;
			cout<<"name:"<<name<<"balance"<<bal<<endl;
		}
		
		friend class PhonePe;
	
};


class PhonePe{
	public:
		void deposit(Bank &obj){
			int n;
			cout<<"enter amount:";
			cin>>n;
			obj.bal=obj.bal+n;
		}
};


int main(){
	Bank b(2454,7000,"aman");
	b.display();
	PhonePe p;
	p.deposit(b);
	b.display();
}*/




#include<iostream>
using namespace std;

class Bank{
	int eno;
	string name;
	double bal;
	
	public:
	  Bank(int e,string n,double b){
	  	eno=e;
	  	name=n;
	  	bal=b;
	  }
	  
	  
	  void display(){
	  	cout<<"eno: "<<eno<<"name "<<name<<"bal:"<<bal<<endl;
	  }
	  
	  friend class Phonepe;
		
};


 class Phonepe{
 	public:
 		void deposit(Bank &obj){
 			int n;
 			cout<<"enter the amount"<<endl;
 			cin>>n;
 			obj.bal=obj.bal+n;
		 }
 };
 
 int main(){
 	Bank aa(2563,"rahul",10000);
 	aa.display();
 	Phonepe p;
 	p.deposit(aa);
 	aa.display();
 }





