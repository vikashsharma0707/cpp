#include<iostream>
using namespace std;

string rect(int l,int b){
	int area;
	area=l*b;
	//cout<<area;
	if(l==b)
	return "yes";
	
	else
	return "no";
	
	
}


int main(){
	int l,b;
	cout<<"enter lenth";
	cin>>l;
	cout<<"enter breadth";
	cin>>b;
	string result;
	 result=rect(l,b);
	 cout<<result;
	
}
