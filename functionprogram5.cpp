/*#include<iostream>
using namespace std;
int main(){
	int n,r,sum;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	
	for(int i=n;i<=r;i++){
		cout<<i<<endl;
		sum=sum+i;
	}
	
	cout<<sum;
	
}*/


/*#include<iostream>
using namespace std;
int main(){
	int n,r,sum;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	
	for(int i=r;i>=n;i--){
		cout<<i<<endl;
		sum=sum+i;
	}
	
	cout<<sum;
	
}*/




/*#include<iostream>
using namespace std;
int main(){
	int n,r;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	
	for(int i=1;i<=r;i++){
		cout<<n*i;
	}
}*/



/*#include<iostream>
using namespace std;
int main(){
	int n,r;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	
	for(int i=r;i>=1;i--){
		cout<<n*i<<endl;
	}
}*/



#include<iostream>
using namespace std;
int main(){
	int n,r,l;
	cout<<"enter number";
	cin>>l;
	cout<<"enter range";
	cin>>r;
	
	for(int i=l;i<=r;i++){
		for(int j=1;j<=10;j++)
		cout<<i*j<<endl;
	}
}




/*#include<iostream>
using namespace std;
int main(){
	int n,r,esum,osum;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	
	for(int i=n;i<=r;i++){
		if(i%2==0){
			cout<<i<<endl;
			esum=esum+i;
		}
		else{
			cout<<i<<endl;
			osum=osum+i;
		}
	}
	cout<<"even number is"<<endl;
	cout<<esum<<endl;
	cout<<"odd number is"<<endl;
	cout<<osum<<endl;
}*/




/*#include<iostream>
using namespace std;
int main(){
	int n,r,esum;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	
	for(int i=r;i>=n;i--){
		if(i%2==0){
			cout<<i<<endl;
			esum=esum+i;
		}
		
	}
	cout<<"even number is"<<endl;
	cout<<esum<<endl;
;
}*/




/*#include<iostream>
using namespace std;
int main(){
	int n,r,osum;
	cout<<"enter number";
	cin>>n;
	cout<<"enter range";
	cin>>r;
	
	for(int i=r;i>=n;i--){
		if(i%2!=0){
			cout<<i<<endl;
			osum=osum+i;
		}
	}
	cout<<osum;
	
}*/


/*#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3,n4,n5;
	cout<<"enter number";
	cin>>n1>>n2>>n3>>n4>>n5;
	
	double avg;
	avg=n1+n2+n3+n4+n5/5;
	cout<<"average of number is"<<avg;
	
	
}*/





