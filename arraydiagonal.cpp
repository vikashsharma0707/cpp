#include<iostream>
using namespace std;
// diagonal of matrix
int main(){
	int arr[3][35];
	cout<<"enter 9 element for array";
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			if(i==j)
			cout<<arr[i][j]<<" ";
			else
			cout<<"0"<<" ";
		}
		cout<<endl;
	}
}

