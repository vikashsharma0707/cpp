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
		
		
		void addamount(){
		   int a=100;
		    amount=50;
		   cout<<amount+a<<endl;
		}
		
		void addamount(int b){
			 amount=50;
			cout<<amount+b;
			
		
			
		}
	
	
	
	
};

int main(){
	Bank obj;
	obj.addamount();
	obj.addamount(200);
}



/*#include<iostream>
using namespace std;

int add(int n){
	int i,rem,sum=0;
	i=n;
	while(n!=0){
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	if(i==sum){
	cout<<"number is armstrong";
	}
	else{
		cout<<"number is not a armstrong number";
	}
	
	
}

int main(){
	int n,i,result;
	cout<<"enter any number";
	cin>>n;
	 add(n);
//	 result=add(n);
		
}*/






	
 
