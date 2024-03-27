#include<iostream>
using namespace std;
/*int main(){
	int arr[5][5];
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			arr[i][j]=10;
		}
	}
	
		for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}*/





// takin input from the user




/*int main(){
	int arr[5][5]; int n;
	cout<<"enter number";
	cin>>n;
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			arr[i][j]=n;
		}
	}
	
		for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}*/









int main(){
	int arr[3][3]={{2,3,5,},{6,7,6},{9,8,6}};
	 int max=arr[0][0];
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
			if(max<arr[i][j])
			max=arr[i][j];
		}
		cout<<max;
	}
}
