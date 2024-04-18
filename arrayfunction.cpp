/*#include<iostream>
using namespace std;
int main(){
	int arr[]={2,3,4,5,6,77,8,99};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	int sum=-0;
	
	for(int i=0;i<=size;i++){
	
	sum=sum+arr[i];
	}
	cout<<sum;
}*/



/*#include<iostream>
using namespace std;
 void add(){
	int arr[]={2,3,4,5,6,77,8,99};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	int sum=-0;
	
	for(int i=0;i<=size;i++){
	
	sum=sum+arr[i];
	}
	cout<<sum;
}

int main(){
	add();
}*/



/*#include<iostream>
using namespace std;
void add(int arr[],int size){
   
	
	int sum=0;
	
	for(int i=0;i<=size;i++){
	
	sum=sum+arr[i];
	}
	cout<<sum;
}
int main(){
		int arr[]={2,3,4,5,6,77,8,99};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	add(arr,size);
}*/


/*#include<iostream>
using namespace std;
 int add(){
	int arr[]={2,3,4,5,6,77,8,99};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	int sum=-0;
	
	for(int i=0;i<=size;i++){
	
	sum=sum+arr[i];
	}
	return sum;
}

int main(){
	int result;
	result=add();
	cout<<result;
}*/



#include<iostream>
using namespace std;
 int add(int arr[],int size){
	
	
	int sum=-0;
	
	for(int i=0;i<=size;i++){
	
	sum=sum+arr[i];
	}
	return sum;
}

int main(){
	int arr[]={2,3,4,5,6,77,8,99};
	int size=sizeof(arr)/sizeof(arr[0]);
	int result;
	result=add(arr,size);
	cout<<result;
}









