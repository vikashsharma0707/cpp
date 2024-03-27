#include<iostream>
using namespace std;


// multiplication  of two matrix
 int main(){
	int a[3][3]; 
	int b[3][3];
	int c[3][3];
	int sum=0;
	cout<<"enter 9 numbers for a"<<endl;
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			cin>>a[i][j];
		}
	}
	
	cout<<"enter 9 numbers for b"<<endl;
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			cin>>b[i][j];
		}
	}
	

	cout<<"multiplication of matrix is";
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			for(int k=0;k<=2;k++){
			sum=sum+a[i][k]*b[k][j];
			
		}
		c[i][j]=sum;
		cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}


}

