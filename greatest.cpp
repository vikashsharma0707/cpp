
#include <iostream>
using namespace std;


/*class Great{
     int n1,n2 ,n3;
		public:
		
		
		void  increment(){
			n1=n1+10;
		}
			
			Great(){
				cout<<"enter three numbers";
				cout<<"enter first numbers";
				cin>>n1;
					cout<<"enter second numbers";
				cin>>n2;
					cout<<"enter thre numbers";
				cin>>n3;
				
			}
			
			void display(){
				if(n1>n2  &&  n1>n3)
				cout<<n1<<"is greatest";
				
				else if(n2>n1  &&  n2>n3)
				cout<<n2<<"is greatest";
				
				else
				cout<<n3<<"is greatest";
		}
		 
		 	void displaysmall(){
				if(n1<n2  &&  n1<n3)
				cout<<n1<<"is smallest";
				
				else if(n2>n1  &&  n2>n3)
				cout<<n2<<"is greatest";
				
				else
				cout<<n3<<"is greatest";
		}
		 
	
	
	
	
	
};




int main(){
     Great g;
	g.display();
	   
	   
}*/


/*class Circle{
	private:
		double radius;
		
		public:
			
			
			Circle(){
				cout<<"enter radius";
				cin>>radius;
			}
			
			
			Circle( int a){
				radius=a;
			}
			
			
			void area(){
				cout<<"area:"<<3.141*radius*radius<<endl;
			}
			
			void circum(){
				cout<<"circumference is"<<2*3.141*radius;
			}
};



int main(){
	Circle c(25);
	c.area();
	c.circum();
}*/










/*class Rect{
	private:
		int length;
		  int width;
		
		public:
			
			
			Rect(){
				cout<<"enter length";
				cin>>length;
					cout<<"enter width";
				cin>>width;
			}
			
			
			Rect( int a,int b){
				length=a;
				width=b;
		
			}
		
			
			void rect(){
				cout<<"rectangle is"<<length*width;
			}
			
			
};



int main(){
  Rect c;
  c.rect();
  Rect a(4,5);
  a.rect();
}*/






/*#include<iostream>
using namespace std;


class Employee{
	public:
	   string name;
	   int eid,year;
	   double salary;
	   char gender;
	   
	 Employee(){
	cout<<"enter id,name,gender,salary,experience1 :";// default 
	cin>>eid>>name>>gender>>salary>>year;
	 }
	 
	 
	 
	   Employee(int id,string n,char g,double s,int y){  //parameterized
	   	eid=id;
		name=n;
		gender=g;
		salary= s;
		year= y;
	   }
	   
	   
	    void display(){
	   	cout<<"employee id:"<<eid<<endl;
	   	cout<<"Name:"<<name<<"year of service:"<<year<<endl;
	   	cout<<"salary:"<<salary<<"Gender:"<<gender<<endl;
	   }
	   
	   
	   void promotion(){
	   	if(year>5){
	   		cout<<"congrats u got a promotion\n";
	   		salary+=1000;    //salary=salary+10000
}
	   
}
};


int main(){

    Employee e1(101,"ajay",'m',88880,8);
	e1.display();

}*/



/*#include <iostream>
using namespace std;


class Great{
	
	private:
		int n1,n2,n3;
		public:
			Great(){
				
			}
			
			Great(int a,int b,int c){
				n1=a;
				n2=b;
				n3=c;
			}
			
			void great(){
				if(n1>n2  &&  n1>n3)
				cout<<n1<<"is greatest";
				
				else if(n2>n1  &&  n2>n3)
				cout<<n2<<"is greatest";
				
				else
				cout<<n3<<"is greatest";
		}
	
	
	
	
};




int main(){

    Great g(2,33,4);
	g.great();

}*/








/*#include <iostream>
using namespace std;

class Person{
	
    public:
	string name;
	int age;
	string country;
	
	

	
	Person(string n,int a,string c){
		name=n;
		age=a;
		country=c;
		
		
	}
	
	
	void display(){
	cout<<"enter your name"<<name;
    cout<<"enter your age"<<age;
    cout<<"enter your country"<<country;
	}
	
	

	
};


int main(){
	Person g("rahul",15,"india");
	g.display();
	
}*/



/*#include <iostream>
using namespace std;

class Student{
	
	private:
		string name;
		int rollno;
		int marks;
		
		
		public:
			
			Student(){
				cout<<"enter name";
				cin>>name;
					cout<<"enter roll number";
				cin>>rollno;
					cout<<"enter marks";
				cin>>marks;
			}
			
		Student(string n,int r,int m){
			name=n;
			rollno=r;
			marks=m;
		}
		
		void display(){
			cout<<"enter name"<<name;
				cout<<"enter roll number"<<rollno;
					cout<<"enter marks"<<marks;
		}	
	
};


int main(){
	
	Student g;
	g.display();
	
	/*
	Student g("rahul",14,78);
	g.display();
}*/



/*#include <iostream>
using namespace std;


class Area{
	
	private:
    double radius;
	int length,width;
	int base,height;
    
    public:
    
    Area(){
        cout<<"enter radius";
		cin>>radius;
		cout<<"enetr length and width";
		 cout<<"enter length";
		 cin>>length;
		 cout<<"enter width";
		 cin>>width;
		 cout<<"enetr prameter";
		 cout<<"enter length";
		 cin>>length;
		 cout<<"enter width";
		 cin>>width;
		 cout<<"enter base and height";
		 cout<<"eneter base";
		 cin>>base;
		 cout<<"enter height";
		 cin>>height;
	}
	
	
	void display(){
		cout<<"area of circle is:"<<3.14*radius*radius;
	}
	
	void circleparameter(){
		cout<<"parameter of circle is:"<<2*3.14*radius;
	}
	
	void rectangle(){
		cout<<"Area of Reactangle is"<<length*width;
	}
	
	void prectangle(){
		cout<<"perimeter of recatangle is:"<<2*length*width;
	}
	
	void triangle(){
		cout<<"area of triangle is: "<<1/2*base*height;
	}
	
};

int main(){
	Area g;
	g.display();
	g.circleparameter();
	g.rectangle();
	g.prectangle();
	g.triangle();
}*/




/*class Circle{
	  private:
	  	double radius;
	  public:
	  	
	  	void add(){
	  	 cout<<"Enter radius";
	  	 cin>>radius;
	  	 cout<<"area is "<<3.14*radius*radius;
	  	 }
	
};

int main(){
	Circle c;
	c.add();
}*/





/*class React{
	   private:
	   	int l,b;
	   public:
	   	   
	   	
	   	  void setter(){
	   	  	cout<<"enter l and b";
	   	  	cin>>l>>b;
	   	  	
	   	  	 area=l*b;
	   	  	 
			 }
			 
			
			 
			 
			 
	
	
	
	
	
	
};


int main(){
	React r;
	r.setter();
	r.getter();
	
}*/




class React{
	   private:
	   	int l,b;
	   public:
	   	   
	   	
	   	  void setter(double a,double c){
	   	  	l=a;
	   	  	b=c;
	   	  	cout<<"enter l and b";
	   	  	cin>>l>>b;
	   	  	
	   	  	 int area=l*b;
	   	  	 
			 }	
};


int main(){
	React r(double a,double c);
	r.setter;
	
}




		
	
	
	
	
	
   
