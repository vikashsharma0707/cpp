/*#include<iostream>
using namespace std;

int main(){
	int n,l,u,rem,sum;
	cout<<"enter number";
	cin>>l;
	cout<<"enter range";
	cin>>u;
	
	for(int i=l;i<=u;i++){
		n=i;
		sum=0;
		
		while(n!=0){
			rem=n%10;
			sum=sum+(rem*rem*rem);
			n=n/10;
		}
		if(i==sum){
			cout<<i<<endl;
		}
		
	}
	
}*/




/*#include<iostream>
using namespace std;

void add(){
	int n,l,u,rem,sum;
	cout<<"enter number";
	cin>>l;
	cout<<"enter range";
	cin>>u;
	
	for(int i=l;i<=u;i++){
		n=i;
		sum=0;
		
		while(n!=0){
			rem=n%10;
			sum=sum+(rem*rem*rem);
			n=n/10;
		}
		if(i==sum){
			cout<<i<<endl;
		}
		
	}
	
}

int main(){
	add();
}*/





/*#include<iostream>
using namespace std;

void add(int l,int u){
	int n,rem,sum;
	for(int i=l;i<=u;i++){
		n=i;
		sum=0;
		while(n!=0){
			rem=n%10;
			sum=sum+(rem*rem*rem);
			n=n/10;
		}
		if(i==sum){
			cout<<i<<endl;
		}
	}
	
}


int main(){
	int l,u;
	cout<<"enter number";
	cin>>l;
	cout<<"enter range";
	cin>>u;
	
	add(l,u);
	
}*/







/*#include<iostream>
using namespace std;

int add(){
	int n,l,u,rem,sum;
	cout<<"enter number";
	cin>>l;
	cout<<"enter range";
	cin>>u;
	for(int i=l;i<=u;i++){
		n=i;
		sum=0;
		while(n!=0){
			rem=n%10;
			sum=sum+(rem*rem*rem);
			n=n/10;
		}
		if(i==sum){
			return i;
		}
	
	}
	
}


int main(){
	
	int result;
	result=add();
	cout<<result;
	
	
	
	
	
}*/






#include<iostream>
using namespace std;

int add(int l,int u){
	int n,rem,sum;
	for(int i=l;i<=u;i++){
		n=i;
		sum=0;
		while(n!=0){
		   rem=n%10;
		   sum=sum+(rem*rem*rem);
		   n=n/10;	
		}
		if(i==sum);
		return i;
	}
	
	
}

int main(){
	int l,u;
	cout<<"enter number";
	cin>>l;
	cout<<"enter range";
	cin>>u;
	
	int result;
	result=add(l,u);
	cout<<result;
}
