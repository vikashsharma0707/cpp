/*#include<iostream>
using namespace std;
int main(){
	int arr[]={22,33,44,5,677,88,56,24};
	int size=8;
	
	int max=arr[0];
	
	for(int i=1;i<=8;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<max;
}*/




/*#include<iostream>
using namespace std;
int main(){
	int arr[]={22,104,103,56,77,89,90,18};
	int size=8;
     
     int max=arr[0];
     int shigh=arr[0];
     
     for(int i=1;i<=8;i++){
     	if(arr[i]>max){
     		max=arr[i];
		 }
	 }
	 
	 
	 for(int i=1;i<=8;i++){
	 	if(arr[i]>shigh && arr[i]<max){
	 		shigh=arr[i];
		 }
	 }
	 
	 cout<<max<<endl;
	 cout<<shigh;
}*/




#include<iostream>
using namespace std;
int main(){
	int arr[]={29,33,44,5,677,88,56,24};
	int size=8;
	
	int min=arr[0];
	
	for(int i=1;i<=7;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	cout<<min;
}




