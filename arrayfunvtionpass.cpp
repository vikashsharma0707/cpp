#include<iostream>
using namespace std;

/*void increment_10(int a[],int size){
	for(int i=0;i<size;i++){
		a[i]=a[i]+10;
	}
}


int main(){
	int arr[6]={1,2,3,4,5,6};
	int number_of_element=sizeof(arr)/sizeof(int);
	increment_10(arr,number_of_element);
	
	for(int i=0;i<number_of_element;i++){
		cout<<arr[i];
	}
}*/





// print even number and else 0

void increment_10(int a[],int size){
	for(int i=0;i<size;i++){
		if(a[i]%2!=0)
		   a[i]=0;
		
	}
}


int main(){
	int arr[6]={1,2,3,4,5,6};
	int number_of_element=sizeof(arr)/sizeof(int);
	increment_10(arr,number_of_element);
	
	for(int i=0;i<number_of_element;i++){
		cout<<arr[i]<<",";
	}
}
