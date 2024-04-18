/*#include<iostream>
using namespace std;
int main(){
	int arr[5],i;
	cout<<"enter array elements";
	for(int i=0;i<=5;i++){
		cin>>arr[i];
	}
	cout<<"array elements are";
	for(int i=0;i<=5;i++){
		cout<<arr[i]<<" ";
	
}
}*/



/*#include<iostream>
using namespace std;
int main(){
	int arr[5],i,sum,product;
	cout<<"enter array elements";
	for(int i=0;i<=5;i++){
		cin>>arr[i];
	}
	cout<<"array elements are";
	for(int i=0;i<=5;i++){
		cout<<arr[i]<<" ";
		sum=sum+arr[i];
		product=product*arr[i];
	
}
   cout<<"sum of number is"<<sum;
   cout<<"sum of number is"<<product;
}*/


/*#include<iostream>
using namespace std;
int main(){
	int arr[5],i,max;
	cout<<"enter array elements";
	for(int i=1;i<=5;i++){
		cin>>arr[i];
	}
	max=arr[0];
	cout<<" array elements are";
	for(int i=1;i<=5;i++){
		cout<<arr[i]<<endl;
		if(arr[i]>max){
			max=arr[i];
		}
	}
	cout<<"maxmum number is"<<max;
	
}*/



/*#include<iostream>
using namespace std;
int main(){
	int arr[5],i,min;
	cout<<"enter array elements";
	for(int i=1;i<=4;i++){
		cin>>arr[i];
	}
	min=arr[0];
	cout<<" array elements are";
	for(int i=1;i<=4;i++){
		cout<<arr[i]<<endl;
		if(arr[i]<min){
			min=arr[i];
		}
	}
	cout<<"maxmum number is"<<min;
	
}*/





#include<iostream>
using namespace std;
int main(){
	int arr[5],i,max,shigh;
	cout<<"enter array elements";
	for(int i=1;i<=5;i++){
		cin>>arr[i];
	}
	max=arr[0];
	shigh=arr[0];
	cout<<" array elements are";
	for(int i=1;i<=5;i++){
		cout<<arr[i]<<endl;
		if(arr[i]>shigh &&  arr[i]<max){
			shigh=arr[i];
		}
	}
	cout<<"maxmum number is"<<shigh;
	
}









