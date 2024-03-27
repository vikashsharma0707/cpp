#include<iostream>
using namespace std;
/*int main(){
	int num,last,sum;
	for(int i=100;i<=900;i++){
		num=i;
		sum=0;
		
		while(num>0){
			last=num%10;
			sum=sum+(last*last*last);
			num=num/10;
		
		if(i==sum)
		cout<<i<<" ";
	}
	}
}*/



//pelidromne number from 100 to 9000
int main(){
	int num,last,sum;
	for(int i=100;i<=900;i++){
		num=i;
		sum=0;
		
		while(num>0){
			last=num%10;
			sum=sum*10+last;
			num=num/10;
		
		if(i==sum)
		cout<<i<<" ";
	}
	}
}
