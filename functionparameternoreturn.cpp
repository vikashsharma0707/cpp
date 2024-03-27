// take something and return nothing
/*int main(){
	void add(int a,int b);
	int x,y;
	cout<<"enter numbers";
	cin>>x>>y;                     //local decleration prototyoe
	add(x,y);                       // function call //actual arguments
}

void add(int a,int b){       //function definition    // formal arguments
	int sum;
	sum=a+b;
	cout<<sum;
}*/



// table print
#include<iostream>
using namespace std;

/*int table(int n,int i){
	for(i=1;i<=10;i++){
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
	}
}

int main(){
	int a ,b;
	cout<<"enter number";
	cin>>a;
	 
	 table(a,b);
}*/








// range armstrong number
/*void arm(int n,int i,int sum,int rem,int r){
	
	for(i=1;i<=r;i++){
		n=i;
		sum=0;
		
	while(n>0){
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
		
}
	if(i==sum)
	cout<<i<<endl;
	}
}


int main(int a,int b,int c,int d,int e){
//int a, b, c, d, e;
	cout<<"enter range";
	cin>>e;
	arm(a,b,c,d,e);
}*/




// pelidrme range
void peli (int u,int l){
	int sum,rem,n;
	for(int i=u;i<=l;i++){
		n=i;
		sum=0;
		
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
		
}
	if(i==sum)
	cout<<i<<endl;
	}
}


int main(){
int a,b;
	cout<<"enter 2 num";
	cin>>a>>b;
	peli(a,b);
}







// table range
 /*void table(int lower,int upper){
 	
 	
	for(int i=lower;i<=upper;i++){
		for(int j=1;j<=10;j++){
		 	cout<<i<<"*"<<j<<"="<<i*j<<endl;
	}
	}
}

int main(){
	int l,u;
	cout<<"enter lower"<<endl;
	cin>>l;
	cout<<"enter upper"<<endl;
	cin>>u;
	 
	 table(l,u); // table(15,20)
}*/





//range primenumber

 /*int prime(){
	int n,i,count;
	count=0;
	for(i=1;i<=n;i++){
		if(n%i==0)
		count++;
	}
	if(count==2)
	cout<<i<<endl;
}


int main(){
	int x,y,z;
	cout<<"enter range";
	cin>>x;
	cout<<"enter number";
	cin>>y;
	prime(x,y);
}*/

