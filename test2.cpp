








//========================================================================================


 //alphabet a to z
  
  int main(){
  	char i;
  	cout<<"alphabet a to z is:"<<endl;
  	
  	for(char i='a';i<='z';i++){
  		cout<<i<<":";
	  }
  }
  
  

















//==================================================================1




//// 1--> way to display  and fing the sum of series
//#include <iostream>
//using namespace std;
//int main()
//{
//	char ch='A';
//	for(int i=1;i<=4;i++){  //outer loop  ---> row
//
//		for(int j=1;j<=i;j++){ //inner loop===>column
//			cout<<ch<<" ";
//			ch++;
//		}
//		cout<<endl;
//	}
//}






//============================================================2
#include<iostream>
using namespace std;
int main(){
	int n,sum;
	cout<<"enter number";
	cin>>n;
	while(n>0){
	
	sum=sum*10+n%10;
	n=n/10;
}

if(sum%2==0)
	cout<<"even";
	else
	cout<<"odd n";


cout<<sum;




//=============================================================================





int main(){
	int n;
	cout<<"enter number";
	cin>>n;
	for(int i=10;i<=15;i++){
		for(int j=1;j<=10;j++){
		
		cout<<i<<"*"<<j<<"="<<n*j<<endl;

}
}

}




//      1



int main(){
	int n,sum=0;
	cout<<"enter number";
	cin>>n;
	
	for(int i=1;i<n;i++){
		if(n%i==0)
		cout<<i<<endl;
	}
}
  



