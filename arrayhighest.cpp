#include<iostream>
using namespace std;
int main(){
	int a[6]={23,44,-5,66,8,10};
	int high,shigh;
	high=a[0];
	shigh=a[0];
	
	for(int i=1;1<6;i++){
		if(a[i]>high){
			high=a[i];
		}
	}
	for(int i=1;1<6;i++){
		if(a[i]>shigh && a[i]<high){
			shigh=a[i];
		}
	}
	cout<<"high"<<high;
	cout<<"shigh"<<shigh;
}
