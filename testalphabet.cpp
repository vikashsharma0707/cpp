 
 #include<iostream>
 using namespace std;
 
 
 
 int main(){
  	char i;
  	cout<<"alphabet a to z is:"<<endl;
  	
  	for(char i='a';i<='z';i++){
  		cout<<i<<":";
  		if(i%4==0)
  		cout<<" ";
	  }
  }
  
