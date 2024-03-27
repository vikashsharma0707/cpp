#include<iostream>
using namespace std;
/*int main(){
	string st="apple is good for good health";
	
	int result=st.find("good",0);
	cout<<"first good encounter:"<<result<<endl;
	
	result=st.find("good",result+1);
	cout<<"second good encounter:"<<result<<endl;
	
	result=0;
}*/

// check for for index number
int main(){
	string st="apple is good for good health";
	
	int result=st.find("good",0);
	cout<<"first good encounter:"<<result<<endl;
	
	result=st.find("for",0);
	cout<<"second good encounter:"<<result<<endl;
	
	result=0;
}


