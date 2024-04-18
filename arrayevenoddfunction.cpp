/*#include<iostream>
using namespace std;
int main(){
	int arr[5],n,i,esum,osum;
	cout<<"enter array elements";
	for(i=1;i<=5;i++){
		cin>>arr[i];
	}
	
	cout<<" array elements are";
	for(i=1;i<=5;i++){
		cout<<arr[i]<<" ";
		
		if(arr[i]%2==0){
			cout<<arr[i]<<endl;
			esum=esum+arr[i];
		}
		else{
			cout<<arr[i]<<endl;
			osum=osum+arr[i];
		}
	}
	cout<<"esum"<<esum;
	cout<<"osum"<<osum;
}*/



/*#include<iostream>
using namespace std;
int main(){
	int arr[] = {22,44,33,55,6,78,99};
	int size=sizeof(arr)/sizeof(int);
	
	int esum;
	
	for(int i=0;i<=6;i++){
		if(arr[i]%2==0){
			cout<<arr[i]<<endl;
			esum=esum+arr[i];
		}
	}
	cout<<esum;
}*/




/*#include<iostream>
using namespace std;
 void add(){
	int arr[] =  {22,44,33,55,6,78,99};
    int size=sizeof(arr)/sizeof(int);
	
	int esum;
	
	for(int i=0;i<=6;i++){
		if(arr[i]%2==0){
			cout<<arr[i]<<endl;
			esum=esum+arr[i];
		}
	}
	cout<<esum;
}

int main(){
	add();
}*/



/*#include<iostream>
using namespace std;
 void add(int arr[],int size){
	
	
	int esum;
	
	for(int i=0;i<=6;i++){
		if(arr[i]%2==0){
			cout<<arr[i]<<endl;
			esum=esum+arr[i];
		}
	}
	cout<<esum;
}

int main(){
	int arr[] =  {22,44,33,55,6,78,99};
	int size=sizeof(arr)/sizeof(int);
	add(arr,size);
}*/








/*#include<iostream>
using namespace std;
 int add(){
	int arr[]= {22,44,33,55,6,78,99};
    int size=sizeof(arr)/sizeof(int);
	
	int esum;
	esum=0;
	
	for(int i=0;i<=6;i++){
		if(arr[i]%2==0){
			cout<<arr[i]<<endl;
			esum=esum+arr[i];
		}
	}
	return esum;
}

int main(){
	int result;
	result=add();
	cout<<result;
}*/






/*#include<iostream>
using namespace std;
 int add(int arr[],int size){
	
	
	int esum;
	esum=0;
	
	for(int i=0;i<=6;i++){
		if(arr[i]%2==0){
			cout<<arr[i]<<endl;
			esum=esum+arr[i];
		}
	}
	return esum;
}

int main(){
	int arr[]= {22,44,33,55,6,78,99};
    int size=sizeof(arr)/sizeof(int);
	int result;
	result=add(arr,size);
	cout<<result;
}*/



#include<iostream>
using namespace std;
int main(){
int arr[]= {23,55,78,99,55,24};


int size=sizeof(arr)/sizeof(int);

 for(int i=0;i<=size;i++){
	if(arr[i]%2==0){
		cout<<arr[i]<<"it is a even number stored at index"<<i<<endl;
	}
}

}
