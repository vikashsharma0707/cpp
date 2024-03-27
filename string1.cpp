#include<iostream>
using namespace std;
/*int main(){
	char name[10]={'a','m','a','n'};
	char name2[10]="ajay";
	// 0---->null chareacter  (sting terminator)
	return 0;
}*/



int main()
{
	string name="aditya";
	
	cout<<name<<endl;
	cout<<"enter name:";
	//cin>>name;
	getline(cin,name);
	
	cout<<"u entered:"<<name;
	return 0;	
}




