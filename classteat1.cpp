//1 program
/*#include<iostream>
using namespace std;

int main(){

int n=5, sum=0;
cout<<"enter the number:";

for(int i=1;i<=5;i++){

if(i==n)
  cout<<i<<"*"<<i<<"=";
  else
   cout<<i<<"*"<<i<<"+";
   sum=sum+(i*i);
}*/
/*#include <iostream>
using namespace std;
int main(){
	int num,sum=0,i;
	cout<<"enter number";
	cin>>num;
	for(i=1;i<=num;i++){
		if(num%i==0)
		{
			sum++;
		}
	}
		if(sum==2)
		{
		cout<<"prime number:";
	}
	else
	{
		cout<<"not prime numbr=er:";
	}*/
	


	
	
/*#include<iostream>
using namespace std;
int main(){
}

int i,n,sum=0;
    for(i=1;i<=n;i++)
    
        sum+=i*i;
    
    cout<<"Sum: "<<sum;
}/*


#include<iostream>
using namespace std
int main()


int num,sum=0,temp,last;
cout<<"enter"
cin<<num;
temp=num;

while(num>){
	last=num%10;
	sum=sum+(last*last*last);
	num=num/10;
}

if(temp==sum){
	cout<<"armstrong number";
}

else{
	cout<<"it not a number";
}







include <iostream>
using namespace std;

int main() {
    int n;
    char ch;

    cout << "Enter a number: ";
    cin >> n;

    if (n > 0) {
    
        for (char i='a'; i<='z'; i++) {
            cout << ch << " ";
        }
    } else if (n < 0) {
        
        for (char i='z'; i<='a';i--) {
            cout << ch << " ";
        }
    } else {
        
        cout <<"Good bye"<< endl;
    }
}
