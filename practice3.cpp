#include<iostream>
using namespace std;
/*int main(){
	int n,rem,sum,i;
	cout<<"enter number";
	cin>>n;
	i=n;
	sum=0;
	while(n>0){
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
}
	if(sum==i)
	cout<<"a";
	else
	cout<<"b";

}*/


/*int main(){
	int i,n,rem,sum;
	for(i=100;i<=900;i++){
		n=i;
		sum=0;
		while(n>0){
			rem=n%10;
			sum=sum+rem*rem*rem;
			n=n/10;
		}
		
	if(i==sum)
	cout<<i<<endl;	
}
}*/



  /*int main(){
	int n,rem,sum,i;
	cout<<"enter number";
	cin>>n;
	i=n;
	sum=0;
	while(n>0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
}
	if(i==sum)
	cout<<"a";
	else
	cout<<"b";

} */






  int main(){
	int n,rem,sum,i;
	for(i=100;i<=900;i++){
	n=i;
	sum=0;
	while(n>0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
}
	if(i==sum)
	cout<<i<<endl;
}

} 








