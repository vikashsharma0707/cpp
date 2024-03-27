#include<iostream>
 using namespace std;
 /*int main(){
 	int num,fac;
 	cout<<"enter number";
 	cin>>num;
 	fac=1;
 	while(num>=1){
 		fac=fac*num;
 		num=num-1;
	 }
	 cout<<"factorial number is :"<<fac;
 }*/
 
 //factorial number
 int main(){
 	int i,num,fac=1;
 	cout<<"enter the number";
 	cin>>num;
 	for(int i=num;i>=1;i--){
 		fac=fac*i;
	 }
	 cout<<num<<"="<<fac;
 }
 
 //sum of digit is
  /*int main(){
 	int n,sum=0;
 	cout<<"enter the number";
 	cin>>n;
 	while(n>0){
 		sum=sum+n%10;
 		n=n/10;	
	 }
	 cout<<"sum of didgit is"<<sum;
}*/


 //sum of digit is
  /*int main(){
 	int n,sum=0;
 	cout<<"enter the number";
 	cin>>n;
 	if(n>0;n=n/10){
 		sum=sum+n%10;
 		cout<<"summ of didgit is :"<<sum;
 	}
}*/




//sum of digit is
   /*int main(){
 	int n,sum=0;
 	cout<<"enter the number";
 	cin>>n;
 	while(n>0){
 		sum=(sum*10)+n%10;
 		n=n/10;
 	}
 	cout<<"reverse number is"<<sum;
 }*/
 
 
 
 
 //reverse of a digit
 /*int main(){
 	int n,rev,sum=0;
 	cout<<"enter the number";
 	cin>>n;
 	while(n>0){
 		rev=n%10;
 		sum=sum*10+rev;
		 n=n/10;
	 }
	 cout<<"the number is :"<<sum;
}*/

 
