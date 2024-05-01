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







/*7>WAP to create a class  Swap which can
#swap the value of 2 variable.
#data member: int num.
#member function: parameterized_constructor(), swap()*/



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




#include<iostream>
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
}






/*9>WAP to create a class Determiner 
#data member: int num.
#member function: parameterized_constructor(),palindrome(),armstrong()*/



/*#include<iostream>
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
}*/
