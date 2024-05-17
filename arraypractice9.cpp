// to take input from the user in 2d aaray
/*#include<iostream>
using namespace std;

int main(){
	int r,c;
	cout<<"enter the numbers of rows";
	cin>>r;
	cout<<"enter the numbers of coloumn";
	cin>>c;
	
	int arr[r][c];
	 for(int i=0;i<r;i++){
	 	for(int j=0;j<c;j++){
	 	cout<<"enter the elenemt of array:";
	 	cin>>arr[i][j];
	 	 }
	 }
	 
	  for(int i=0;i<r;i++){
	  	for(int j=0;j<c;j++){
	 	cout<<arr[i][j]<<" ";
	 	 }
	 	 cout<<endl;
	 }
}*/


// addition of number by taking input from the user
#include<iostream>
using namespace std;

int main(){
	int r,c;
	cout<<"enter the numbers of rows";
	cin>>r;
	cout<<"enter the numbers of coloumn";
	cin>>c;
	int sum=0;
	int arr[r][c];
	 for(int i=0;i<r;i++){
	 	for(int j=0;j<c;j++){
	 	cout<<"enter the elenemt of array:";
	 	cin>>arr[i][j];
	 	 }
	 }
	 
	  for(int i=0;i<r;i++){
	  	for(int j=0;j<c;j++){
	 	cout<<arr[i][j]<<" ";
	 	sum=sum+arr[i][j];
	 	 }
	 	 cout<<endl;
	 	 cout<<sum;
	 }
	 
}
