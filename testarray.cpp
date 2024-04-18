#include<iostream>
using namespace std;

void add(int a[],int s){
	for(int i=0;i<s;i++){
		if(i!=0 && i!=s-1){
			a[i]=a[i]+10;
		}
	}
	for(int i=0;i<s;i++){
		cout<<a[i]<<" ";
	}
}


int main(){
	int arr[]= {22,34,56,77,88,95};
	int size=sizeof(arr)/sizeof(int);
	add(arr,size);
}
