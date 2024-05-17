#include<iostream>
using namespace std;

// size decay:   whenever we pass array as a parameter,it cant hold yje size, this concept is called size decay.
// therefore we have to pass size as well(seperate parameter)

/*void create_array(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<"enter number:";
		cin>>a[i];
	}
}





void display(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}




int main(){
	int size;
	cout<"enter enter size";
	cin>>size;
	int arr[size];  // 4 size array
	create_array(arr,size);
	display(arr,size);
}*/




#include<iostream>
using namespace std;

void search(int a[],int n){
	string ch;
	int num;
	
	while(1){
		int flag=0;
		cout<<"enter number, which you want to search:";
		cin>>num;
		
		for(int i-0;i<n;i++){
			if(a[i]==num){
				cout<<"match not found";
				flag=1;
			}
		}
		
		if(flag==0){
			cout<<"match not found"<<endl;
		}
	}
	
	
	
}


// tranpose array

