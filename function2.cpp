/*#include<iostream>
using namespace std;

int great(int a,int b,int c,int d){    // a=n1=2,b=3,c=4,d=5
return a+b+c;                   //control goes to main()
	                                //formal parameters  //postional arguments
}



int main(){
	int n1,n2,n3,n4,result;
	cout<<"enter 4 numbers:";      //2 3 4 5
	cin>>n1>>n2>>n3>>n4;
	
	result=great(n1,n2,n3,n4);
		 if(n1>n2 && n1>n3 ) 
		 cout<<"n1 is max"<<endl;
		 else if(n2>n3 && n2>n2 ) 
		 cout<<"n2 is max"<<endl;
		 
		 else 
		 cout<<"n3 is max"<<endl;
		 
		 
		                                 // function calling // control goes to add()
	    cout<<"ADDITION:"<<result<<endl<<n4<<endl;                      
}*/








/*#include<iostream>
using namespace std;

int great(int a,int b,int c,int d){ 

int value=a+b+c;
if(value>d) 
return value;
else return d;                       // a=n1=2,b=3,c=4,d=5                 //control goes to main()
	                                //formal parameters  //postional arguments
}



int main(){
	int n1,n2,n3,n4;
	cout<<"enter 4 numbers:";      //2 3 4 5
	cin>>n1>>n2>>n3>>n4;
	cout<<"greatest:"<<great(n1,n2,n3,n4);
	
		 
		 
		                                 // function calling // control goes to add()
	                        
}*/

















#include<iostream>
using namespace std;




int great(int,int,int,int);     // declesration,prototyoe,signature
int main(){
	int n1,n2,n3,n4;
	cout<<"enter 4 numbers:";      //2 3 4 5
	cin>>n1>>n2>>n3>>n4;
	cout<<"greatest:"<<great(n1,n2,n3,n4);
	
		 
		 
		                                 // function calling // control goes to add()
	                        
}


int great(int a,int b,int c,int d){ 

int value=a+b+c;
if(value>d) 
return value;
else return d;                       // a=n1=2,b=3,c=4,d=5                 //control goes to main()
	                                //formal parameters  //postional arguments
}
