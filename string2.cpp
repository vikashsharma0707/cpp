//  class string


#include<iostream>
using namespace std;
/*int main(){
	string st="apple";    //98  //smaller
	string st1="appx";  //97   //bigger
	
	//lexicographical comparision on the basis of ascii value
	
	
	// a=97,b=98
	//compare()----> int output
	//positive --> st>st1
	//negative -->st<st1
	//zero -->same
	
	int result=st.compare(st1);
	cout<<result;
	
}*/






int main(){
	string st="apple";    //98  //smaller
	string st1="appx";  //97   //bigger
	
	//lexicographical comparision on the basis of ascii value
	
	
	// a=97,b=98
	//compare()----> int output
	//positive --> st>st1
	//negative -->st<st1
	//zero -->same
	
	int result=st1.compare(st);
	cout<<result;
	
}
