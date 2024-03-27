#include<iostream>
using namespace std;


 int main(){

int n,sum,last;
for(int i=100;i=900;i++){
	n=i;
	sum=0;
	while(n>0){
	
		last=n%10;
		sum=sum+(last*last*last);
		n=n/10;			
}
	if(i==sum)
		cout<<i<<" ";
	}

}


/*int main(){
	int n,count,i;
	count=0;
	
	for(int i=100;i<=300;i++){
		if(i%2==0)
		count++;
	}
	if()
	cout<<;

	

	
}*/






