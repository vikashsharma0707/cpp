#include<iostream>
using namespace std;


// fanomacci series
/*int main(){
	int n,x,y,z;
	cout<<"enter any number";
	cin>>n;
	
	x=0;
	y=1;
	z=0;
	for(z=1;z<=n;z=x+y){
		cout<<z<<endl;
		x=y;
		y=z;
	}
}*/




// armstrong number
/*int main(){
	int n,sum,rem,i;
	cout<<"enter any number";
	cin>>n;
	i=n;
	sum=0;
	
	while(n>0){
		rem=n%10;
		sum=sum+rem*rem*rem;
		n=n/10;
	}
	if(i==sum)
	cout<<"armstrong number";
	else
	cout<<"not a armstrong number";
}*/


// armstrong number range

/*int main(){
	int n,i,sum,rem;
	
	for(i=100;i<=900;i++){
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
}*/







// pelidoninal number
 /*int main(){
	int n,sum,rem,i;
	cout<<"enter any number";
	cin>>n;
	i=n;
	sum=0;
	
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(i==sum)
	cout<<"pelidominal number";
	else
	cout<<"not apelidominal number";
}*/








// pelidoinal number upto range
 int main(){
	int n,sum,rem,i;
	for(i=100;i<=1000;i++){
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
