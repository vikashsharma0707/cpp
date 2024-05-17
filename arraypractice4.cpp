// triplet target sum
/*#include<iostream>
using namespace std;
int main(){
	int array[]={1,2,3,4,2,3,4,5,1,2,2};
	int targetsum=4;
	int pairs=0;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			for(int k=0;k<5;k++){
				if(array[i]+array[j]+array[k]==targetsum){
				
				pairs++;
			}
			}
		}
	}
	cout<<pairs;
}*/

#include<iostream>
using namespace std;

int main(){
	int arr[]={1,2,3,4,1,2,3};
	int size=7;
	
	for(int i=0;i<=size;i++){
		for(int j=i+1;j<=size;j++){
			if(arr[i]==arr[j]){
				arr[i]=arr[j]=-1;
			}
		}
	}
	
	for(int i=0;i<=size;i++){
		if(arr[i]>0){
			cout<<arr[i];
		}
	}
}
