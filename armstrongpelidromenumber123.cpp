#include<iostream>
using namespace std;
/*int main(){
	int n,sum=0,i,rem;
	cout<<"enter number";
	cin>>n;
	
	i=n;
	while(n>0){
	rem=n%10;
	sum=sum*10+rem;
	n=n/10;
	}
	if(i==sum){
		cout<<"pelidrome number"<<endl;
	}
	else{
		cout<<"not a pelidrome number";
	}
}*/





/*int main(){
	int n,sum=0,i,last,rem;
	cout<<"enter number";
	cin>>n;
	
	i=n;
	while(n>0){
	rem=n%10;
	sum=sum+(last*last*last);
	n=n/10;
	}
	if(sum==i){
		cout<<"armstrong number"<<endl;
	}
	else{
		cout<<"not a armstrong number";
	}
}*/





int main(){
	int n,sum,i,last,rem;
	
	
	for(i=100;i<=999;i++){
		i=n;
		sum=0;
	while(n>0){
	rem=n%10;
	sum=sum+(last*last*last);
	n=n/10;
	}
	if(sum==i){
		cout<<sum<<" "<<endl;
	}
	
}
}
