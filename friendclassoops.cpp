#include<iostream>
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
}




