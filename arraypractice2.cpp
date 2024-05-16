// taking input from the user
/*#include<iostream>
using namespace std;
int main(){
	char v[5];
	
	for(int i=0;i<5;i++){
		cin>>v[i];
	}
	
	for(int i=0;i<5;i++){
		cout<<v[i]<<endl;
	}
}*/



// sum of the element of the array
/*#include<iostream>
using namespace std;
int main(){
	int array[] ={1,2,3,4,5};
	int size = sizeof(array)/sizeof(array[0]);
	
	int sum=0;
	
	for(int i=0;i<size;i++){
		sum=sum+array[i];
	}
	
	cout<<sum;
}*/




// find the maximum number in the array


/*#include<iostream>
using namespace std;
int main(){
	int array[] ={1,2,3,4,5};
	int max=array[0];
	
	for(int i=1;i<5;i++){
		if(array[i]>max){
		 max=array[i];
		}
		
}
	cout<<max;

}*/


// linera search in array element is present there or not and returns the index number

#include<iostream>
using namespace std;
int main(){
	int array[] = {1,2,3,4,5};
	int key=2;
	int ans=-1;
	
	for(int i=0;i<5;i++){
		if(array[i]==key){
			ans=i;
		}
	}
	cout<<ans;
}
