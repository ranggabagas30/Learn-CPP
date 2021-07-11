#include<iostream>
#include<cstring> 
#include<sstream>
using namespace std; 

void simpleTo(); 
void cinChain(); 
void cinRetrieveString(); 
void stringToNum(); 
int main() {
    
    //simpleIo(); 
    //cinChain(); 
    //cinRetrieveString(); 
    stringToNum(); 
    return 0; 
}

void simpleIo() {
    //simple IO
    int i; 
    cout << "Please enter an integer value: "; 
    cin >> i; 
    cout << "The value you entered is " << i; 
    cout << " and its double is " << i * 2 << ".\n"; 
}

void cinChain() {
    // cin chain
    long first, second; 
    cout << "Please enter 2 numbers: "; 
    cin >> first >> second; 
    cout << "First: " << first << endl; 
    cout << "Second: " << second << endl; 
}

void cinRetrieveString() {
    // // cin to receive string input 
    string name; 
    cout << "What's your name?: "; 
    getline(cin, name); 
    cout << "Hello, " << name << ".\n";
}

void stringToNum() {
    // string to numerical value and vice versa 
    string mystring("1024"); 
    int myint; 
    stringstream(mystring) >> myint; 
    cout << "myint value: " << myint << endl;

    string s; 
    int quantity = 0; 
    float price = 0; 
    cout << "Enter price: "; 
    getline(cin, s); 
    stringstream(s) >> price; 
    cout << "Enter quantity: "; 
    getline(cin, s); 
    stringstream(s) >> quantity; 
    cout << "Total price: " << price * quantity << endl; 
}