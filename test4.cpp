#include<iostream>
using namespace std;

int main() {
    int n;
    char ch;

    cout << "Enter a number: ";
    cin >> n;

    if (n > 0) {
    
        for(char i='a'; i<='z'; i++) {
            cout << ch << " ";
        }
    } else if(n < 0) {
        
        for (char i='z'; i<='a';i--) {
            cout << ch << " ";
        }
     else{
        cout<<"Good bye"<< endl;
    }
}
