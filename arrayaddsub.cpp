#include<iostream>
using namespace std;
// addition of two matrix
/*int main(){
	int a[3][3]; 
	int b[3][3];
	int c[3][3];
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
	

	cout<<"addition of matrix is";
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j]<<"  ";
		}
		cout<<endl;
	}


}**/





















// subtraction of twm marix
/*int main(){

	int a[3][3]; 
	int b[3][3];
	int c[3][3];
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
	

	cout<<"addition of matrix is";
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j]<<"  ";
		}
		cout<<endl;
	}


}*/









int main(){

	int a[3][3]; 
	int b[3][3];
	int c[3][3];
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
	

	cout<<"addition of matrix is";
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			c[i][j]=a[i][j]*b[i][j];
			cout<<c[i][j]<<"  ";
		}
		cout<<endl;
	}


}
