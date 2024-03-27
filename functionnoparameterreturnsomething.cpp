// take nothing and return something
  /*int add();      // global decreation
 int main(){
	 int result;
	result = add();
	cout<<"sum is"<<result;
	return 0;                  
}

 int add(){       
	int a,b,sum;
	cout<<"enter numbers";
	cin>>a>>b;
	sum=a+b;
	return sum;
}*/




#include<iostream>
using namespace std;
/*int square(){
	int s,area;
	cout<<"enter side";
	cin>>s;
	
	area=s*s;
	return area;
}

int main(){
	int result;
	result=square();
	cout<<"area of square is"<<result;
		
}*/






/*int prime(){
	int n,i,count=0;
	cout<<"enter number";
	cin>>n;
	for(i=1;i<=n;i++){
		if(n%i==0)
		count++;
	}
	if(count==2)
	cout<<"prime numbber";
	else
	cout<<"not a prime number";
}
}*/








int hcf(){
	int n1,n2;
	cout<<"enter number first";
	cin>>n1;
	cout<<"enter number second";
	cin>>n2;
	
	while(n1!=n2){
		if(n1>n2)
		n1=n1-n2;
		else
		n2=n2-n1;
	}
	return n1;
		
}
int main(){
	int result;
	result=hcf();
	cout<<"hcf is"<<result;
}









