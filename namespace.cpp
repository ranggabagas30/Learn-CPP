#include<iostream>
using namespace std; 

namespace foo {
    int value() { return 5; }
    int x = 5; 
    int y = 10; 
}
namespace bar {
    const double pi = 3.1416; 
    double value() { return 2*pi; }
    double x = pi; 
    double y = 2.7183; 
}

int globalVar; // unintialized

int main() {
    // accessed from outside namespace
    cout << foo::value() << "\n"; 
    cout << bar::value() << "\n"; 
    cout << bar::pi << "\n"; 

    // using 
    using foo::x; 
    using bar::y; 
    cout << x << "\n"; 
    cout << y << "\n"; 
    cout << foo::y << "\n"; 
    cout << bar::x << "\n"; 

    using namespace foo; 
    using namespace bar; 
    cout << x << endl; 
    cout << bar::x << endl; 

    int localVar; 
    cout << globalVar << endl; 
    cout << localVar << endl; 
}