/*Create a class Bank with a data member named amount.
Now make two member function of this class with same name 'addamount' as follows:
1 - without any parameter - flat 100 rs amount will be added to the amount
2 - having a parameter which is the amount that will be added to the amount
Create an object of the Bank class and 
display the final amount Bank.*/




#include<iostream>
using namespace std;

class Bank{
	
	public:
	   int amount;
		  
		  Bank(){
		  	amount=50;
		  }
		
		void addamount(){
		   
		    amount=amount+100;
		   cout<<amount<<endl;
		}
		
		void addamount(int b){
			 amount=amount+b;
			cout<<amount;
			
		
			
		}
	
	
	
	
};

int main(){
	Bank obj;
	obj.addamount();
	obj.addamount(200);
}










	
 
