/*1>WAP to create a class  Book .
#data member: int Bid,Quantity;
#member function: parameterized_constructor(),void Purchase() 
,void Sale(), void currentstock().
# first user intitailized data members with input values.
# purchase can add books quantity
# sale can decremented books quantity.*/


/*#include<iostream>
using namespace std;

class Book{
	private:
		int bid,quantity;
		
	public:
		Book(int id,int q){
			bid=id;
			quantity=q;
		}
		
		void currentstock(){
			cout<<"book id:"<<bid<<"quantity:"<<quantity<<endl;
		}
		
		void purchase(){
			int n;
			cout<<"how many stock do you wnat to print:";
			cin>>n;
			quantity=quantity+n;
		}
		
	
		
		
		
};

int main(){
	Book aa(45,80);
	aa.currentstock();
	aa.purchase();
	aa.currentstock();
}*/



/*2>Write a class named Circle constructed by a radius and 
two methods which will compute the area and the perimeter of a circle.*/

// with default constructor


/*#include<iostream>
using namespace std;

class Circle{
	  private:
	  	double r, p; 
	
	
	 public:
	 	int area,perimeter;
	 	Circle(){
	 		cout<<"enter the radius:";
	 		cin>>r;
	 		cout<<"enter the perimeter:";
	 		cin>>p;
	 		
		 }
		 
		 void area1(){
		 	area=3.14*r*r;
		 	perimeter=2*3.14*r;
		 	
		 }
		 
		 void display(){
		 	cout<<"radius of circlre is:"<<area<<endl;
		 	cout<<"perimeter of circlre is:"<<perimeter<<endl;
		 	
		 }
	
	
};


int main(){
	Circle aa;
	aa.area1();
	aa.display();
}*/





/*2>Write a class named Circle constructed by a radius and 
two methods which will compute the area and the perimeter of a circle.*/

// with parameterized constructor
/*#include<iostream>
using namespace std;

class Circle{
	  private:
	  	double r, p; 
	
	
	 public:
	 	int area,perimeter;
	 	Circle(double a,double b ){
	 		r=a;
	 		p=b;
		 }
		 
		 void area1(){
		 	area=3.14*r*r;
		 	perimeter=2*3.14*r;
		 	
		 }
		 
		 void display(){
		 	cout<<"radius of circlre is:"<<area<<endl;
		 	cout<<"perimeter of circlre is:"<<perimeter<<endl;
		 	
		 }
	
	
};


int main(){
	double r,p;
	cout<<"enter the radius:";
	cin>>r;
	cout<<"enter the perimeter:";
	cin>>p;
	Circle aa(5,6);
	aa.area1();
	aa.display();
}*/




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




/*4>WAP to create a class  Resume .
#data member: string name,double percentage10,double percentage12,double percentagedegree,bool currentlyworking,
#member function: parameterized_constructor(),void update_percent() ,void update_name(), void display().*/





#include<iostream>
 using namespace std;
 
 class Resume{
		string name;
		double p10,p12,pdegree;
		bool working;
		
		
	public:
		Resume(string n,double p1,double p2,double p3,bool w){
			name=n;
			p10=p1;
			p12=p2;
			pdegree=p3;
			working=w;	
		}
		
		void show(){
			cout<<"name:"<<name<<"percentage 10:"<<p10<<"percentege"<<p12<<"percentage degree"<<pdegree<<"working"<<working<<endl;
		}
	
	 void update(string nname,double p4,double p5,double p6){
	 	name=nname;
	 	p10=p4;
	 	p12=p5;
	 	pdegree=p6;
	 }
	 
	 
	 void display(){
	 	cout<<"new name"<<name<<"p10"<<p10<<"p12"<<p12<<"pdegree"<<pdegree<<"working"<<working;
	 }
		
};

int main(){
	Resume aa("rahul",88,44,55,true);
	aa.
		
}




