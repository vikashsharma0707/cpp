#include<iostream>
using namespace std;
// maximum element
/*int main(){
	int arr[5]={3,4,2,4,5};
	int max=arr[0];
	
	for(int i=1;i<5;i++){
		if(max<arr[i])
		max=arr[i];
	}
	cout<<max;
}*/




// minimum element 
/*int main(){
	int arr[5]={3,4,2,4,5};
	int min=arr[0];
	
	for(int i=1;i<5;i++){
		if(min>arr[i])
		min=arr[i];
	}
	cout<<min;
}*/



// second largest value
/*int main(){
	int arr[5]={3,4,2,4,5};
	int max=arr[0];
	int secmax=arr[0];
	
	for(int i=0;i<=4;i++){
		if(max<arr[i])
		max=arr[i];
	}
	for(int i=0;i<=4;i++){
		if(secmax<arr[i]  && arr[i]!=max)
		secmax=arr[i];
	}
	cout<<max<<endl;
	cout<<secmax;
}*/




// second minimum 
 int main(){
	int arr[5]={3,4,2,4,5};
	int min=arr[0];
	int secmin=arr[0];
	
	for(int i=0;i<=4;i++){
		if(min>arr[i])
		min=arr[i];
	}
	for(int i=0;i<=4;i++){
		if(secmin>arr[i]  && arr[i]!=min)
		secmin=arr[i];
	}
	cout<<min<<endl;
	cout<<secmin;
}









