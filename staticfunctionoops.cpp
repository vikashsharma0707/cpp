// static variable + static function
#include<iostream>
using namespace std;

class Cybrom{
	public:
		string st_name,course;
		static string institude_name;
		
		
		
	public:
		Cybrom(string n,string c){
			st_name=n;
			course =c;
		}
		
		void display(){
			cout<<"Institude name:"<<institude_name<<endl;
			cout<<"name:"<<st_name<<endl;
			cout<<"course:"<<course<<endl;
		}
};

string Cybrom::institude_name="cybrom academy";


int main(){
	Cybrom obj1("raj","phython"),obj2("rahul","java");
	
	obj1.display();
	obj2.display();
	
	// obj1.institude_name="rgpv";     unhralthy coding
	
	Cybrom::institude_name="Cybrom infotrch";
	obj1.display();
	obj2.display();
	
	
}
