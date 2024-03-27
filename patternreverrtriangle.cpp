

#include<iostream>
using namespace std;
/*int main(){
int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
		  if(j>=i)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	
}*/




// reverse traiangle with start with space

/*int main(){
int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
		  if(j>=6-i)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	
}*/









// reaverse triangle with decreasing j
int main(){
int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
		  if(j<=6-i)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	
}
