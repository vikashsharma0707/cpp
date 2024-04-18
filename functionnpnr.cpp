// no parameter and no return

/*#include<iostream>
using namespace std;

add(){
	int a,b,sum;
	cout<<"enter first number";
	cin>>a;
	cout<<"enter second number";
	cin>>b;
	
	
	sum=a+b;
	cout<<"the of two value is"<<sum;
	
}

int main(){
	add();
}*/



/*#include<iostream>
using namespace std;


int main(){
	void add();
	add();
}

 void add(){
	int a,b,sum;
	cout<<"enter first number";
	cin>>a;
	cout<<"enter second number";
	cin>>b;
	
	
	sum=a+b;
	cout<<"the of two value is"<<sum;
	
}*/


// having paramerter and no return
/*#include<iostream>
using namespace std;
add(int a,int b){
	int sum=0;
	sum=a+b;
	cout<<sum;
}


int main(){
	//int a,b;
	int x,y;
	cout<<"enter two numbers";
	cin>>x>>y;
	
	add(x,y);
}*/


// take nothing and return somethingh
/*#include<iostream>
using namespace std;

int add(){
	int a,b,sum;
	cout<<"enter two number";
	cin>>a>>b;
	
	sum=a+b;
	return sum;
}


int main(){
	int result;
	result=add();
	cout<<"sum of result is"<<result;
}*/




// having parameter and having return

#include<iostream>
using namespace std;
int add(int a,int b){
	int sum=0;
	sum=a+b;
	return sum;	
}

int main(){
	int x,y,result;
	cout<<"enter two numbers";
	cin>>x>>y;
	result =add(x,y);
	cout<<"sum of two number is"<<result;	
	
}


