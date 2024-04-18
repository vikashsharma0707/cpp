/*#include<iostream>
using namespace std;
int main(){
	int x,y,pro=1;;
	cout<<"enter number";
	cin>>x;
	cout<<"enter power";
	cin>>y;
	
	
	for(int i=1;i<=y;i++){
		pro=pro*x;
	}
	cout<<pro;
	
}*/



/*#include<iostream>
using namespace std;
void add(){
	int x,y,pro=1;;
	cout<<"enter number";
	cin>>x;
	cout<<"enter power";
	cin>>y;
	
	
	for(int i=1;i<=y;i++){
		pro=pro*x;
	}
	cout<<pro;
	
}

int main(){
	add();
}*/






/*#include<iostream>
using namespace std;
void add(int x,int y){
	int pro=1;
	
	
	
	for(int i=1;i<=y;i++){
		pro=pro*x;
	}
	cout<<pro;
	
}

int main(){
	int x,y;
	cout<<"enter number";
	cin>>x;
	cout<<"enter power";
	cin>>y;
	
	add(x,y);
}*/



/*#include<iostream>
using namespace std;
int add(){
	int x,y,pro=1;
	cout<<"enter number";
	cin>>x;
	cout<<"enter power";
	cin>>y;

	
	
	
	for(int i=1;i<=y;i++){
		pro=pro*x;
	}
	return pro;
	
}

int main(){
	
	
	int result;
	result=add();
	cout<<result;
	
}*/



#include<iostream>
using namespace std;
int add(int x,int y){
	int pro=1;
	for(int i=1;i<=y;i++){
		pro=pro*x;
	}
	return pro;	
}

int main(){
	int x,y;
	cout<<"enter number";
	cin>>x;
	cout<<"enter power";
	cin>>y;
	int result;
	result=add(x,y);
	cout<<result;
	
}










