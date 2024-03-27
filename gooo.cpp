#include<iostream>
using namespace std;
int main(){
	int n,r,sum;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	for(int i=1;i<=n;i++){
		sum=i*i*i;
		cout<<"("<<i<<","<<sum<<")";
	}
}

