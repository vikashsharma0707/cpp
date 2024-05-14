// singleton 
/*#include<iostream>
using namespace std;

class Singleton{
	private:
		static Singleton *p;// pointer static 
		int data;
		
		Singleton(){ // constructor private
			
		}
		
		public:
			
			
			static Singleton * getinstance(){
				if(p==NULL){
					p=new Singleton;
					return p;
				}
				
				else{
					return p;
				}
			}
			
			void setdata(int n){
				data = n;
			}
			
			void getdata(){
				cout<<data<<endl;
			}
};
  // int Singleton::data=90;
  Singleton* Singleton::p=NULL;
  
  
  int main(){
  	// Singleton *p= new Singleton;   error
  	
  	Singleton *obj1=Singleton::getinstance();
  	obj1->setdata(23);
  	obj1->getdata();
  	cout<<"Address of Object"<<obj1<<endl;
  	
  	Singleton *obj2=Singleton::getinstance();
  	obj2->setdata(900);
  	obj1->getdata();
  	obj2->getdata();
  	cout<<"Address of Object"<<obj2<<endl;
  }*/
  
  
  
  
  
  
  
  
  #include<iostream>
using namespace std;

class Singleton{
	private:
		static Singleton *p;// pointer static 
		int data;
		
		Singleton(){ // constructor private
			
		}
		
		public:
			// delete copy constructor
			Singleton (Singleton &obj)=delete;
			
			static Singleton * getinstance(){
				if(p==NULL){
					p=new Singleton;
					return p;
				}
				
				else{
					return p;
				}
			}
			
			void setdata(int n){
				data = n;
			}
			
			void getdata(){
				cout<<data<<endl;
			}
};
  // int Singleton::data=90;
  Singleton* Singleton::p=NULL;
  
  
  int main(){
  	// Singleton *p= new Singleton;   error
  	
  	Singleton *obj1=Singleton::getinstance();
  	obj1->setdata(23);
  	obj1->getdata();
  	cout<<"Address of Object"<<obj1<<endl;
  	
  	// copy constructor which is not allowed in Singleton and not making two onject
  	/*Singleton obj2(*obj1);
  	obj2.setdata(89);
  	obj1->getdata();
  	obj2.getdata();*/
  	
  	Singleton *obj2=Singleton::getinstance();
  	obj2->setdata(900);
  	obj1->getdata();
  	obj2->getdata();
  	cout<<"Address of Object"<<obj2<<endl;
  }
