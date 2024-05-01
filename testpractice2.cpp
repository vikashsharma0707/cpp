#include<iostream>
using namespace std;

class Resume{
	string name;
	double p10,p12,pdgree;
	bool working;
	
	public:
		Resume(string n,double p,double p1,double p2,bool b){
			name=n;
			p10 =p;
			p12=p1;
			pdgree=p2;
			working=b;
		}
		
		
		void show(){
			cout<<"name:"<<name<<"percentage 10:"<<p10<<"percentage 12:"<<p12<<"percentege degree:"<<pdgree<<"working"<<working<<endl;
		}
		
		void update(string nname,double np,double np1,double p3){
			name=nname;
			p10=np;
			p12=np1;
			pdgree=p3;
		}
		
		void display(){
			cout<<"new name:"<<name<<"new percentage 10"<<p10<<"percentage 12:"<<p12<<"percentage degree:"<<pdgree;
		}
};

int main(){
	Resume aa("ajay",98,99,99,true);
	aa.show();
	aa.update("rahul",88,83,85);
	aa.display();
}





