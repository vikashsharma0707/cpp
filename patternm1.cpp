#include<iostream>
using namespace std;
/*int main(){
	int i,j;
  for(i=1;i<=5;i++){
  	for(j=1;j<=5;j++){
  		if(j<=i)
  		cout<<"*";
  		else
  		cout<<" ";
	  }
	  cout<<endl;
  }
}*/


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









int main(){
	int i,j,n=1;
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			if(j<=i){
			
			cout<<n;
			n++;
		}
			else
				cout<<" ";
			
		}
		cout<<endl;
	}
}



