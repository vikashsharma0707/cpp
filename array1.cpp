O/*#include<iostream>
using namespace std;
int main(){
	int arr[]= {2,3,4,5,6};
	int size= sizeof(arr)/sizeof(arr[0]);
	
	int sum=0;
	for(int i=0;i<=size;i++){
		sum=sum+arr[i];
	}
	cout<<sum;
}*/


/*#include<iostream>
using namespace std;
int main(){
	int arr[] ={2,3,4,5,6,7,8,9};
	int size= sizeof(arr)/sizeof(arr[0]);
	
	int sum=0;
	for(int i=0;i<=size;i++){
		sum=sum+arr[i];
	}
	cout<<sum;
}*/



/*#include<iostream>
using namespace std;
int main(){
	int arr[] ={2,3,4,5,6,6,77,88,99};
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
	int arr[] ={22,45,67,89,55};
	
	int max=arr[0];
	for(int i=1;i<=4;i++){
		if(arr[i]>max){
		max=arr[i];
			}
	}
	cout<<max;
}*/



/*#include<iostream>
using namespace std;
int main(){
	int arr[] ={22,3,4,55,66};
	
	int key=5;
	int ans=-1;
	
	for(int i=0;i<=5;i++){
		if(arr[i]==key){
			ans=i;
		}
	}
	cout<<ans;
	
}*/




#include<iostream>
using namespace std;
int main(){
	int arr[] ={1,2,6,3,4,5,4,56,7,8,9};
	
     int targetsum=9;
     int size=10;
     int triplets=0;
     
     for(int i=0;i<=size;i++){
     	for(int j=i+1;j<=size;j++){
     		for(int k=j+1;k<=size;k++){
     			if(arr[i]+arr[j]+arr[k]==targetsum)
     			triplets++;
			 }
		 }
	 }
	 cout<<triplets;
}



