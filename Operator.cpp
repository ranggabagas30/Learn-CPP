#include<iostream>
using namespace std; 

int main() {
    // assignment operator
    int i = 1; 
    long l = 2; 
    float f = .721; 
    int result;
    cout << "i: " << i << endl; 
    cout << "l: " << l << endl; 
    cout << "f: " << f << endl; 
    cout << "i + l: " << i + l << endl; 
    cout << "i + f: " << i + f << endl; 

    // arithmetic operator
    result = l + f; 
    cout << "l + f: " << result << endl; 
    result = l + (i = 10); 
    cout << "i + (i = 10): " << result << endl; 
    result = l - f; 
    cout << "l - f: " << result << endl; 

    // relational and comparison operators
    int a = 2, b =3, c = 6; 
    bool d = a == 5; 
    cout << "a == 5: " << d << endl; // 0 which means false 
    d = (a*b > c); 
    cout << "(a*b > c): " << d << endl; 
    d = (b+4 > a*c); 
    cout << "(b+4 > a*c): " << d << endl; 
    d = ((b=2) == a); 
    cout << "((b=2) == a): " << d << endl; // 1 which means true

    // conditional ternary operator
    c = a > b? a : b; 
    cout << "c: " << c << endl; 
    
    // comma operator
    c = (b = 2, a = b + 4, a + c); 
    cout << "c: " << c << endl; 

    // explicit type casting operator
    i = (int) f; 
    cout << "i: " << i << endl; 

    // sizeof 
    int x = sizeof(i); 
    cout << "x: " << x << endl; 
    x = sizeof(l); 
    cout << "x: " << x << endl; 
    x = sizeof(f); 
    cout << "x: " << x << endl; 
}