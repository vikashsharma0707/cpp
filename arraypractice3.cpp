#include<iostream>
using namespace std;
int main(){
	int array[] ={1,2,3,4,5,6,7,8};
	int size=8;
	int targetsum= 8;
	
	int pairs=0;
	for(int i=0;i<=size;i++){
		for(int j=i+1;j<=size;j++){
			if(array[i]+array[j]==targetsum){
				pairs++;
			}
			
		}
	
	}
	
	cout<<pairs;	
}
