#include<iostream>
using namespace std;
// target sum
/*int main(){
	int arr[]={1,3,4,5,6};
	int targetsum=7;
	int size=5;
	
	int sum=0;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]+arr[j]==targetsum)
			sum++;
		}
	
	}
	cout<<sum;
}*/





// target sum of triplet
int main(){
	int arr[]={1,3,4,5,6,2,3,3,2};
	int targetsum=5;
	int size=8;
	
	int sum=0;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			for(int k=j+1;k<=size;k++){
			
			if(arr[i]+arr[j]+arr[k]==targetsum)
			sum++;
		}
		}
	
	}
	cout<<sum;
}
