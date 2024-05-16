
// read function
// to print charecter
/*#include<iostream>
#include<fstream>
using namespace std;


int main(){
	ifstream obj;
	obj.open("new.txt");
	string st;
	
	char ch =obj.get();
	cout<<ch;
	
	ch =obj.get();
	cout<<ch;
}*/

// read multilple use by using loop and eof function
/*#include<iostream>
#include<fstream>
using namespace std;


int main(){
	ifstream obj;
	obj.open("new.txt");
	string st;
	
	// end of file --> eof()
	
	while(!obj.eof()){
		getline(obj,st);
		cout<<st<<endl;
	}
	}*/


// this is second method to print number line by getline function
// getline function
  #include<iostream>
#include<fstream>
using namespace std;


int main(){
	ifstream obj;
	obj.open("new.txt");
	string st;
	
	// end of file --> eof()
	
	while(getline(obj,st)){
		cout<<st<<endl;
	}
	}
