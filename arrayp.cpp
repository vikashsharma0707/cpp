#include<iostream>
using namespace std;
int main(){
	int i;
	int array[5];
	int key=0;

	int sum=0;
	for(int i=0;i<5;i++){
		cin>>array[i];
	}
	
	
	for(int i=0;i<5;i++){
	cout<<array[i]<<" "<<endl;
	sum=sum+array[i];
	cout<"enter the key do you want to print";
	if(array[i]==key){
		cout<<array[i];
	}
	}
	
//	cout<<sum;
}
