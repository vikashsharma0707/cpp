#include<iostream>
using namespace std;
int main(){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},sum;
	for(int i=1;i<3;i++){
		sum=0;
		for(int j=0;j<3;j++){
			cout<<a[i][j]<<" ";
			sum=sum+a[i][j];
		}
		cout<<"="<<sum<<endl;
	}
}
