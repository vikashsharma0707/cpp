#include <iostream>
using namespace std;
 class Book{
 	int bid,quantity;
 	
 	public:
 		Book(int id,int q){
 			bid=id;
 			quantity=q;
		 }
 
 
 void currentstock(){
 	cout<<"Book id:"<<bid<<"Quantity:"<<quantity<<endl;
 }
 
 
 void purchase(){
 	int n;
 	cout<<"how many stock do you want to print";
 	cin>>n;
 	quantity=quantity+n;
 }
 
};

int main(){
	Book ob(101,56),ob1(102,80);
	ob1.currentstock();
	ob1.purchase();
	ob1.currentstock();
}
