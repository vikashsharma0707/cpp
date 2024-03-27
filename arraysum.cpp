#include<iostream>
using namespace std;
// addition of array
/*int main(){
	int arr[5]={2,3,4,5,6};
	int size=5;
	 int sum=0;
	for(int i=1;i<size;i++){
		 sum=sum+arr[i];
	}
	cout<<sum;
}*/


int main(){
	int arr[5],sum=0;
	double product=1;
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	for(int i=0;i<5;i++){
		sum=sum+arr[i];
		product=product*arr[i];
	}
	cout<<sum<<endl;
	cout<<product;
	
}
