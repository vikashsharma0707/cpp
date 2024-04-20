#include <iostream>
using namespace std;


class Great{
	
	private:
		int n1,n2;
		public:
		
			Great(int a,int b){
				n1=a;
				n2=b;
		
			
			}
			
			void great(){
			  
			  
			cout<<"before swapping the value of a and b is:"<<n1<<n2;
			 int temp=n1;
			n1=n2;
			n2=temp;
			cout<<"after swapping the value of a and b is:"<<n1<<n2;	 
			
		}
	
	
	
	
};




int main(){

    Great g(2,33);
	g.great();

}

