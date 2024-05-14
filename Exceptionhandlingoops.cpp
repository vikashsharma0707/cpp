// exception handling
//wap to determine the division of two number

// if we the 0 int demominator then it gives exception handling output gives inf
// Zero division error
/*#include<iostream>
using namespace std;
int main(){
	double a,b;
	cout<<"enter two numbers:";
	cin>>a>>b;
	cout<<"Division:"<<a/b<<endl;
}*/


// exception handling try block
#include<iostream>
using namespace std;
int main(){
	double a,b;
	try
    {
	cout<<"enter two numbers:";
	cin>>a>>b;
	if(b==0){
		throw b;  // execption throw
	}
	cout<<"Division:"<<a/b<<endl;
}
	catch(double ex){
		cout<<"denominator can't be zero";
		cout<<"you gave denominator-->"<<ex<<endl;
	}
}
