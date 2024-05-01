/*Q.3)What is polymorphism? differnce between early and late binding.
       WAP to create a class  Highest which can find highest number amoung 3 numbers.
       data member: int n1,n2,n3,n4.
       member function: parameterized_constructor(),
       overload fun() as--->highest(n1,n2,n3),highest(n1,n2,n3,n4),*/
       
       
    #include<iostream>
    using namespace std;
    
    class Highest{
    	private:
    		int n1,n2,n3,n4;
    	public:
    		Highest(int a,int b,int c){
    			n1=a;
    			n2=b;
    			n3=c;
    			if(n1>n2 && n1>n3){
    				cout<<"n1 is greater"<<n1;
				}
				
			    else if(n2>n1 && n2>n3){
    				cout<<"n2 is greater"<<n2;
				}
				
				else{
					cout<<"n3 is greater"<<n3;
				}
			}
			
			Highest(int a,int b,int c,int d){
				n1=a;
    			n2=b;
    			n3=c;
    			n4=d;
    			
    			if(n1>n2 && n1>n3 && n1>n4){
    				cout<<"n1 is greater"<<n1;
				}
				
			    else if(n2>n1 && n2>n3  && n2>n4){
    				cout<<"n2 is greater"<<n2;
				}
				
			     else if(n3>n2 && n3>n2  && n3>n4){
    				cout<<"n3 is greater"<<n3;
				}
				else{
					cout<<"n4 is greatest"<<n4;
				}
    			
			}
			
		
    	
	};
	
	
	
	int main(){
		Highest aa(2,3,4);
		//Highest aa(2,3,4,5);
	
		
		
	}

