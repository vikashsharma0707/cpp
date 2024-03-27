#include<iostream>
using namespace std;


/*string average(int a,int b,int c,int d,int e){    // formal
	double avg =a+b+c+d+e/5.0;
	cout<<"average:"<<avg;
	return" sucess";
}

int main(){
	int n1,n2,n3,n4,n5;      // actual
	string msg;            //fun--> return --> hold
	cout<<"enter 5 numbers:";
	cin>>n1>>n2>>n3>>n4>>n5;
	msg=average(n1,n2,n3,n4,n5);
	cout<<"operation is"<<endl<<msg;
}*/




// factorial number
/*int fact(int a){
	int fac=1;
	for(int i=a;i>=1;i--){
		fac=fac*i;
	
	}
		return fac;
}

int main(){
int n;
	cout<<"enter any number";
	cin>>n;
	int result;
	result = fact(n);
	cout<<"factorial is :"<<result<<endl;
	return 0;
}*/





//reverse number
/*int rev(int a){
  int sum;
	sum=0;
	while(a>0){
		sum=sum*10+a%10;
		a=a/10;
	}
	return sum;
}


int main(){
int n, m;
	cout<<"enter any number";
	cin>>n;
	cout<<"number is"<<n;
	int result;
	result=rev(n,m);
	cout<<"reversed of number is"<<result;
	return 0;
}*/






// armstrong number
/*int arm(int n){
	int sum,rem;
	sum=0;
	int i;
	i=n;
	while(n>0){
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(i==sum)
	cout<<"a";
	else
	cout<<"b";
	return sum;
}


int main(){
int x ;
	cout<<"enter any number";
	cin>>x;
	int result;
	result=arm(x);
	cout<<"armstrong number:";
}*/







// pelidrome number
int peli(int n){
	int sum, rem;
	sum=0;
	int i;
	i=n;
	while(n>0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(i==sum)
	cout<<"a";
	else
	cout<<"b";
	return sum;
}


int main(){
	int x;
	cout<<"enter any number";
	cin>>x;
	int result;
	result=peli(x);
	cout<<"pelidrome number:";
}







