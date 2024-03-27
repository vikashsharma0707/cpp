#include<iostream>
using namespace std;
// size of array
/*int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,19,26};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<n<<endl;
}*/


// size of array and value of array
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9,19,26};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<n<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<endl;
}
