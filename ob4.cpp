#include<iostream>
using namespace std;

class Determiner{
	int num;
	
	public:
		Determiner(int n){
			num=n;
		}
		
		void pelindrome(){
			int sum,rem,i;
			sum=0;
			i=num;
			
			while(num>0){
				rem=num%10;
				sum=sum+(rem*rem*rem);
				num=num/10;
			}
			
			if(i==sum){
				cout<<"number is pelidrome";
			}
			else{
				cout<<"number is armstrong";
			}
		}
};

int main(){
	Determiner aa(153);
	aa.pelindrome();
}
