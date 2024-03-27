#include<iostream>
using namespace std;
/*int main(){
 double cost,discount;
 cout<<"enter the cost price";
 cin>>cost;
 
 
 
 if(cost<2000 && cost>0){
 	discount=cost*5/100.0;
 	cout<<"disount"<<discount<<endl;
 	cout<<"amount paid"<<cost-discount;
 }
 if(cost>2001 && cost<5000){
 	discount=cost*25/100.0;
 	cout<<"disount"<<discount<<endl;
 	cout<<"amount paid"<<cost-discount;
 }
 if(cost>5001 && cost<10000){
 	discount=cost*35/100.0;
 	cout<<"disount"<<discount<<endl;
 	cout<<"amount paid"<<cost-discount;
 }
 if(cost>10000){
 	discount=cost*50/100.0;
 	cout<<"disount"<<discount<<endl;
 	cout<<"amount paid"<<cost-discount;
 }
}*/





int main(){
	double salary,hra,da,pf,netpay;
	cout<<"enter salary";
	cin>>salary;
	
	
	
	
	da=salary*25/100.0;
	cout<<da<<endl;
	hra=salary*15/100.0;
	pf=salary*8.33/100.0;
	
	
	cout<<"net pay"<<salary+da+hra;
	cout<<"gross pay"<<netpay-pf;
		
}

