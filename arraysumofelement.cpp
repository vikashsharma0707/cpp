#include<iostream>
using namespace std;
int main(){
	int i,j;
	int arr[i][j];
	int sum=0;
	cout<<"enter 9 element for array";
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			cin>>arr[i][j];
			sum=sum+arr[i][j];	
		}
		cout<<"sum of matrix is"<<sum;
	}
}
