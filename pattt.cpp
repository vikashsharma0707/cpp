//// 1--> way to display  and fing the sum of series
#include <iostream>
using namespace std;
int main()
{
	char ch='A';
	for(int i=1;i<=4;i++){  //outer loop  ---> row

		for(int j=1;j<=i;j++){ //inner loop===>column
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
}
