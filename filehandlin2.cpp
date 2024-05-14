/*wap to create a file named "new.txt" and add content in this file until user want.
and also read all content in the end.*/
// open(filename_path,opening_path)
// write mode--> default ,out+ trunc
// when we create mode --> class_name::mode_name1 |  class_name::mode_name2

#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream wr;
	wr.open("new.txt",ios::out|ios::app);
	wr<<"\nthis is todays content\n";
	wr<<"yyyyyyyyyyyyyyyyyyyyyy\n";
	wr.close();
}
