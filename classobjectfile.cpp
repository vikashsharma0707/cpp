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


/*#include<iostream>
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
			cout<<"name:"<<name<<"percentage 10:"<<p10<<"percentege 12:"<<p12<<"percentage degree:"<<pdegree<<"working:"<<working<<endl;
		}
	
	 void update(string nname,double p4,double p5,double p6){
	 	name=nname;
	 	p10=p4;
	 	p12=p5;
	 	pdegree=p6;
	 }
	 
	 
	 void display(){
	 	cout<<"new name:"<<name<<"p10:"<<p10<<"p12:"<<p12<<"pdegree:"<<pdegree<<"working:"<<working;
	 }
		
};

int main(){
	Resume aa("rahul",88,44,55,true);
	aa.show();
	aa.update("jay",55,77,87);
	aa.display();
		
}*/




/*6>WAP to create a class  Highest which can
#find highest number amoung 3 numbers.
#data member: int n1,n2,n3,high.
#member function: parameterized_constructor(), highest()*/

/*#include<iostream>
using namespace std;

class Highest{
	public:
	int n1,n2,n3,high;
	

		Highest(int a,int b,int c){
			n1=a;
			n2=b;
			n3=c;
			
		}
		
	    void highest(){
	    
	    	if(n1>n2 && n1>n3){
	    		high=n1;
	    		//cout<<"n1 is gretest"<<n1;
			}
	    	
	    	  
	    	else if(n2>n1 && n2>n3){
	    		high=n2;
	    		//cout<<"n2 is greates"<<n2;
			}
	    	
	    	
	    	else
	    	high=n3;
	    	//cout<<"n3 is greatest"<<n3;
		}
		
		void display(){
			cout<<high;
		}
};

int main(){
	Highest aa(2,3,4);
	aa.highest();
	aa.display();
}*/





/*#include<iostream>
using namespace std;


class Swap{
	int a,b;
	
	public:
		Swap(int c,int d){
			a=c;
			b=d;
		}
		
		
		void swap(){
			int temp;
			cout<<"before swapping value od a and b is:"<<a<<" "<<b<<endl;
			
			temp=a;
			a=b;
			b=temp;
			cout<<"after swapping value od a and b is:"<<a<<" "<<b<<endl;
			
			
		}
};


int main(){
	Swap aa(2,3);
	aa.swap();
	
	
}*/





/*8>WAP to create a class  Factorial which can
#find the factorial of a num.
#data member: int num.
#member function: parameterized_constructor(), factorial()*/



/*#include<iostream>
using namespace std;

class Fact{
	public:
	int n;
		Fact(int a){
			n=a;
			
		}
		
		void factorial(){
			int fac=1;
			for(int i=n;i>=1;i--){
			fac	=fac*i;
		
			}
		    
			cout<<fac;
		
		
		}
		
		
			
};

int main(){
	Fact aa(5);
	aa.factorial();
}*/



/*9>WAP to create a class Determiner 
#data member: int num.
#member function: parameterized_constructor(),palindrome(),armstrong()*/



#include<iostream>
using namespace std;

class Determiner{
	int num;
	
	public:
		Determiner(int n){
			num=n;
		}
		
		void pelindrome(){
			int sum,rem,i;
			sum=0;
			i=num;
			
			while(num>0){
				rem=num%10;
				sum=sum*10+rem;
				num=num/10;
			}
			
			if(i==sum){
				cout<<"number is pelidrome"<<endl;
			}
			else{
				cout<<"number is not a pelindrome"<<endl;
			}
		}
		
		void armstrong(){
			int sum,rem,i;
			sum=0;
			i=num;
			
			
			while(num>0){
				rem=num%10;
				sum=sum+(rem*rem*rem);
				num=num/10;
			}
			
			if(i==sum){
				cout<<"number is armstrong"<<endl;
			}
			
			else{
				cout<<"number is not armstrong"<<endl;
			}
		}
};

int main(){
	Determiner aa(153);
	aa.pelindrome();
	aa.armstrong();
}
