#include<iostream>
#include<fstream>
using namespace std;

// fstream---> ifstream.ofstream, fstream


int main(){
  ofstream obj1;
  obj1.open("C:\\Users\\Lenovo\\Documents\\java program\\xyz.txt");
  cout<<"file created";
  obj1<<"this is my content\n";
  obj1<<"we just create a file";
  obj1.close();
}









