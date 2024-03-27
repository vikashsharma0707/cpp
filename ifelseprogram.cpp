#include<iostream>
using namespace std;
/*int main(){
	int year;
	cout<<"enter the year";
	cin>>year;
	if((year%4==0 && year%100==0) || year%400==0){
		cout<<"year is leap year";
	}
	else{
		cout<<"not a leap year";
	}
}*/



int main(){
	double purchase,discount;
	cout<<"enter the purchase amount";
	cin>>purchase;
	if(purchase>=1000){
	 discount=purchase*(5/100.0);
	 cout<<"discount"<<discount;
	 cout<<"total cost"<<purchase-discount;
	}
	else{
		cout<<"no discount";
	}	
}
