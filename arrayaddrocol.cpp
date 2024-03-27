#include<iostream>
using namespace std;
/*int main(){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},sum;
	for(int i=0;i<3;i++){
		sum=0;
		for(int j=0;j<3;j++){
			cout<<a[i][j]<<" ";
			sum=sum+a[i][j];
		}
		cout<<"="<<sum<<endl;
	}
}*/



//coloumn wise addition
/*#include<iostream>
using namespace std;
int main(){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},sum;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<a[i][j]<<" ";
	}
	cout<<endl;
}
	for(int i=0;i<3;i++){
		sum=0;
		for(int j=0;j<3;j++){
			sum=sum+a[j][i];
		}
			
		cout<<sum<<" ";
	}
}*/







//coloumn wise addition
#include<iostream>
using namespace std;
int main(){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j)
			cout<<a[i][j]<<" ";
	}
	cout<<"0";
}
	/*for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j);
		}
		cout<<a;
			
	}*/
}






