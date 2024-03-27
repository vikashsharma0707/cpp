#include<iostream>
using namespace std;
/*int main(){
	int arr[5]={3,4,5,6,7};
	for(int i=0;i<=4;i++){
		cout<<arr[i]<<endl;
	}
		for(int i=4;i>0;i--){
		cout<<arr[i];
	}
}*/







int main(){
	int arr[5]={3,4,5,6,7};
	for(int i=0;i<=4;i++){
		cout<<arr[i]<<" ";
	}
	
	 int i=0 ,  j=5-1;
	 while(i<j){
	 	swap(arr[i], arr[j]);
	 	i++;
	 	j--;
	 	
	 }
	 	for(int i=0;i<=4;i++){
		cout<<arr[i]<<" ";
}
}
