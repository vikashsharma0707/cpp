#include<iostream>
using namespace std;
/*int main(){
	int n,r;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	
	for(int i=n;i<=r;i++){
		for(int j=1;j<=10;j++){
			cout<<i*j<<endl;
		}
	}
}*/


/*#include<iostream>
using namespace std;
void add(){
	int n,r;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	
	for(int i=n;i<=r;i++){
		for(int j=1;j<=10;j++){
			cout<<i*j<<endl;
		}
	}
}

int main(){
	add();
}*/



/*#include<iostream>
using namespace std;
void add(int n,int r){
	
	
	for(int i=n;i<=r;i++){
		for(int j=1;j<=10;j++){
			cout<<i*j<<endl;
		}
	}
}

int main(){
	int n,r;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	
	add(n,r);
}*/



#include<iostream>
using namespace std;
int add(){
	int n,r,sum=0;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	
	for(int i=n;i<=r;i++){
		for(int j=1;j<=10;j++){
			return i*j;
		}
		
	}
}

int main(){
	int result;
	result=add();
	cout<<result;
}
