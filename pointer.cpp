/*#include<iostream>
using namespace std;
int main(){
	int a=90,b=99;
	double c=99.99;
	int *p=&a;      // pinter is that use that type of pointer
	
	p=&b;
	//p=&c;  error
}*/





/*#include<iostream>
using namespace std;
int main(){
	int n=90,*p;
	p=&n;
	
cout<<"address of n:"<<p<<endl;
cout<<"data stored ar n:"<<n;
cout<<"data stored at n:"<<*p;   //derefrence
}


// pointer create , pointer dereherence  --> *
//deerefernce  -->  fetech data through pointer*/


// addition in pointer
/*#include<iostream>
using namespace std;
int main(){
	int n=90,*p;
	p=&n;
	
cout<<"address of n:"<<p<<endl;
cout<<"data stored ar n:"<<n;
cout<<"data stored at n:"<<*p;   //derefrence



*p=*p+10;
cout<<"data stored ar n;"<<*p<<endl;
}*/





//  maximum number


/*#include<iostream>
using namespace std;
int main(){
	int n=90, n1=999,*p,*p1;
	p=&n;
	p1=&n1;
	
	
	
	if(*p>*p1)
	cout<<"higher"<<*p;
	else
	cout<<"higher"<<*p1;

}*/






#include<iostream>
using namespace std;
int main(){
	int n=90, n1=999,*p,*p1;
	p=&n;
	p1=&n1;
	
	int sum=*p1+*p1;
	cout<<"sum is"<<sum;

}
