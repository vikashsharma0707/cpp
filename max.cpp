#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int max=arr[0];
	int size=9;
	int smax=arr[0];
	
	for(int i=0;i<size;i++){
		if(max<arr[i])
		max=arr[i];
	}
	cout<<max<<endl;
	for(int i=1;i<size;i++){
		if(smax<arr[i]  &&  arr[i]!=max)
		smax=arr[i];
	}
	cout<<smax;
}
