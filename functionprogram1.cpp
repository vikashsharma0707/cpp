/*#include<iostream>
using namespace std;

void add(){
	double r;
	cout<<"enter radius";
	cin>>r;
	
	cout<<"area of circle is"<<3.14*r*r;	
}

int main(){
	add();
}*/


/*#include<iostream>
using namespace std;

void add(double r){
	cout<<"area of circle is"<<3.14*r*r;	
}

int main(){
	double r;
	cout<<"enter radius";
	cin>>r;
	
	add(r);
}*/





/*#include<iostream>
using namespace std;

int add(){
	double r;
	int area;
	cout<<"enter radius";
	cin>>r;
	
	area=3.14*r*r;
	return area;
}


int main(){
	double result;
	result=add();
	cout<<"area of circle is"<<result;	
}*/


#include<iostream>
using namespace std;

int add(double r){
	int area;
	area =3.14*r*r;
	return area;
	
}


int main(){
	 double r;
	 int result;
	cout<<"enter radius";
	cin>>r;
	 
	   result=add(r);
	   cout<<"area of circle is"<<result;
	
	
}
