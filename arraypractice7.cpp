#include<iostream>
using namespace std;

int main(){
	int r,c;
	cout<<"enter rows:";
	cin>>r;
	cout<<"enter col:";
	cin>>c;
	
	int arr[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<"enter the element do you want tp print:";
			cin>>arr[i][j];
		}
	}
	
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<arr[i][j];
			
		}
	}
	
}
