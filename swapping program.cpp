/*#include<iostream>
using namespace std;
int main(){
	int a,b,temp;
	cout<<"enter first number";
	cin>>a;
	cout<<"enter second number";
	cin>>b;
    cout<<"before swapping the nuberis"<<"a:"<<a<<"b:"<<b<<endl;
    
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping";
    cout<<" value of a is"<<a;
    cout<<" value of a is"<<b;
    
}*/




/*#include<iostream>
using namespace std;
void add(){
	int a,b,temp;
	cout<<"enter first number";
	cin>>a;
	cout<<"enter second number";
	cin>>b;
    cout<<"before swapping the nuberis"<<"a:"<<a<<"b:"<<b<<endl;
    
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping";
    cout<<" value of a is"<<a;
    cout<<" value of a is"<<b;
    
}

int main(){
	add();
}*/





/*#include<iostream>
using namespace std;
void add(int a,int b){
	int temp;
	
    cout<<"before swapping the nuberis"<<"a:"<<a<<"b:"<<b<<endl;
    
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping";
    cout<<" value of a is"<<a;
    cout<<" value of a is"<<b;
    
}

int main(){
	int a,b;
	cout<<"enter first number";
	cin>>a;
	cout<<"enter second number";
	cin>>b;
	add(a,b);
}*/


#include<iostream>
using namespace std;
int add(){
	int a,b,temp;
	cout<<"enter first number";
	cin>>a;
	cout<<"enter second number";
	cin>>b;
    cout<<"before swapping the nuberis"<<"a:"<<a<<"b:"<<b<<endl;
    
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping";
    return a;
    return b;
    
}

int main(){

	int result;
	result=add();
	cout<<result<<result;
}






/*#include<iostream>
using namespace std;
int add(int a,int b){
	int temp;
	cout<<"enter first number";
	cin>>a;
	cout<<"enter second number";
	cin>>b;
    cout<<"before swapping the nuberis"<<"a:"<<a<<"b:"<<b<<endl;
    
    temp=a;
    a=b;
    b=temp;
    cout<<"after swapping";
    return a,b;
    
}

int main(){
    int a,b;
	int result;
	result=add(a,b);
	cout<<result;
}*/







