// to find the size of array
/*#include<iostream>
using namespace std;

int main(){
	int array[] ={1,2,3,4,5};
	cout<<sizeof(array)<<endl;
}*/



// to find the number of and length of array
/*#include<iostream>
using namespace std;

int main(){
	int array[] ={1,2,3,4,5};
	cout<<sizeof(array)<<endl;
	cout<<sizeof(array)/sizeof(array[0]);
}*/


// to print the element of the array

/*#include<iostream>
using namespace std;

int main(){
	int array[] ={1,2,3,4,5};
	
	int size=sizeof(array)/sizeof(array[0]);
	for(int i=0;i<size;i++){
		//cout<<i<<endl;
		cout<<array[i]<<endl;
	}
}*/




// while loop
#include<iostream>
using namespace std;

int main(){
	int array[] ={1,2,3,4,5};
	int n;
	int size=sizeof(array)/sizeof(array[0]);
    while(n<size){
    	cout<<array[n]<<endl;
    	n++;
	}
	
	
}



