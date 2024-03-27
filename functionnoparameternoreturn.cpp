/*int main(){
	void add();    //function decleration prototyoe
	add();   // function call
}

void add(){       //function definition
	int a,b,sum;
	cout<<"enter number";
	cin>>a>>b;
	sum=a+b;
	cout<<sum;
}*/




// area of rectangle   
#include<iostream>
using namespace std;
/*void rec(){
	int l,b,area;
	cout<<"enter length";
	cin>>l;
	cout<<"enter breadth";
	cin>>b;
	area=l*b;
	cout<<"area of rectangle is"<<area;
}
int main(){
	 rec();

}*/






int power(){
	int x,y,i,pro;
	cout<<"enter number";
	cin>>x;
	cout<<"enter power number";
	cin>>y;
	
	pro=1;
	i=1;
	
	
	while(i<=y){
		pro=pro*x;
		i=i+1;
	}
	cout<<"power of number is"<<pro;
}


int main(){
	power();
}



