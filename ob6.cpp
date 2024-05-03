/*3)Write a  class named animal constructed by a name, no_legs, category
(herbivores, carnivores and omnivores)and

#private data member: name(string type),no_legs (int type),category(string type) (herbivores, carnivores and omnivores)
detail(string type)

private member function:
    void set_detail()
description:
 1)herbivores -> "animals that eat plants"
 2)carnivores -> "animals that eat only meat"
 3)omnivores -> "animals eat both plants and meat"
  
public 
#member function: parameterized_constructor(name,legs,category)
                  and call set_detail() inside it.
                  all_details() -->display all
                  category () -->display category
Create some objects and display result.*/


#include<iostream>
using namespace std;

class Animal{
	string name,category;
	int nolegs;
	
	
	void details(){
		if(category=="plants"){
			cout<<"herbivores";
		}
		
		else if(category=="meats"){
			cout<<"carnivores";
		}
		
		else if(category=="plants and meat"){
			cout<<"omnivores";
		}
	}
	
	public:
		Animal(string n,string c,int l){
			name=n;
			category=c;
			nolegs=l;
			details();
		}
		
		void daisplay(){
			cout<<"name:"<<name<<"category:"<<category<<"numbers of legs:"<<nolegs<<endl;
		}
		
		void display1(){
			cout<<"category:"<<category;
		}
			
};


int main(){
	Animal aa("tiger","meat",4);
	aa.daisplay();
	aa.display1();
}

