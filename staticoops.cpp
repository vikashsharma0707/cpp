#include<iostream>
using namespace std;

static int b= 900;
void f1(){
	int a=90;
}

void f2(){
	b++;
	cout<<b<<endl;
//	cout<<a;
}


int main(){
	f1();
	f2();
}


