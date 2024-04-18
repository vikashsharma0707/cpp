/*#include<iostream>
using namespace std;
int main(){
	int a,b,temp;
	cout<<"enter first number";
	cin>>a;
	cout<<"enter second number";
	cin>>b;
	
   cout<<"before swapping the number is"<<"a;"<<a<<"b:"<<b;
   
   temp=a;
   a=b;
   b=temp;
   
   cout<<"after swapping value of a is"<<"a:"<<a<<"b:"<<b;
}*/


/*#include<iostream>
using namespace std;
int main(){
	int n1,n2,hcf;
	cout<<"enter 1 number";
	cin>>n1;
	cout<<"enter 2 number";
	cin>>n2;
	
	while(n1!=n2){
		if(n1>n2){
			n1=n1-n2;
		}
		else{
			n2=n2-n1;
		}
	}
	cout<<"hcf"<<n1;
}*/






/*#include<iostream>
using namespace std;
int main(){
	int a,b,n1,n2,hcf,lcm;
	cout<<"enter 1 number";
	cin>>a;
	cout<<"enter 2 number";
	cin>>b;
	n1=a;
	n2=b;
	
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
		hcf=a;
		lcm=n1*n2/hcf;
	}
	cout<<"lcm is "<<lcm;
	
	
	
}*/



/*#include<iostream>
using namespace std;
int main(){
	int n,i,rem,sum;
	cout<<"enter any number";
	cin>>n;
	
	sum=0;
	i=n;
	while(n>0){
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(i==sum){
		cout<<"number is armstrong number";
	}
	else{
		cout<<"number is not a armstrong number";
	}
}*/


/*#include<iostream>
using namespace std;
int main(){
	int n,i,l,u,rem,sum;
	cout<<"enter number";
	cin>>l;
	cout<<"enter range";
	cin>>u;
	 for(i=l;i<=u;i++){
	 	n=i;
	 	sum=0;
	 	
	 	while(n>0){
	 		rem=n%10;
	 		sum=sum+(rem*rem*rem);
	 		n=n/10;
		 }
		  if(i==sum)
	 	cout<<i<<endl;
	 }
	
	 
}*/





/*#include<iostream>
using namespace std;
int main(){
	int n,i, rem,sum;
	cout<<"enter any number";
	cin>>n;
	
	sum=0;
	i=n;
	
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(i==sum){
		cout<<"number is pelidrome";
	}
	else{
		cout<<"number is not a pelidrome number";
	}
}*/



/*#include<iostream>
using namespace std;
int main(){
	int n,i,l,u,rem,sum;
	cout<<"enter number";
	cin>>l;
	cout<<"enter range";
	cin>>u;
	
	
	
	for(int i=l;i<=u;i++){
		sum=0;
		n=i;
		
		
		while(n>0){
			rem=n%10;
			sum=sum*10+rem;
			n=n/10;
		}
		
		if(i==sum){
			cout<<i<<endl;
		}
	}
}*/




/*#include<iostream>
using namespace std;
int main(){
	int n,i, rem,sum;
	cout<<"enter any number";
	cin>>n;
	
	sum=0;
	i=n;
	
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
     cout<<sum;
	
}*/


/*#include<iostream>
using namespace std;
int main(){
	int n,count;
	cout<<"enter any number";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(n%2==0){
			count++;
		}
	}
	if(count==2){
		cout<<"number is prime";
	}
	else{
		cout<<"number is composite";
	}
}*/




/*#include<iostream>
using namespace std;
int main(){
	int x,y,pro;
	cout<<"enter any number";
	cin>>x;
	cout<<"enter power";
	cin>>y;
	
	
pro=1;
	
	
	for(int i=1;i<=y;i++){
		pro=pro*x;
	}
	cout<<pro;
}*/





/*#include<iostream>
using namespace std;
int main(){
	int n,r;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	
	for(int i=n;i<=r;i++){
		for(int j=1;j<=10;j++){
			cout<<i*j<<endl;
		}
	}
}*/




/*#include<iostream>
using namespace std;
int main(){
	int n,x,y,z,count;
	cout<<"enter any numner";
	cin>>n;
	
	x=0;
	y=1;
	z=0;
	count=0;
	for(int count=1;count<=n;count++){
		cout<<"\n"<<z;
		x=y;
		y=z;
		z=x+y;
	}
}*/




/*#include<iostream>
using namespace std;
int main(){
	char i;
	for(int i='a';i<='z';i++){
		cout<<i;
	}
}*/




/*#include<iostream>
using namespace std;
int main(){
	char i;
	for(char i='a';i<='z';i++){
		cout<<i;
	}
}*/


#include<iostream>
using namespace std;
int main(){
	int n,r;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	for(int i=n;i<=r;i++){
		cout<<i;
	}
}



