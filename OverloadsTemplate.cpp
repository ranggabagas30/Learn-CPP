#include<iostream> 
using namespace std; 

// overloading functions 
// declarations and definitions 
int operate(int a, int b) {
    return (a*b); 
}
double operate(double a, double b) {
    return (a/b); 
}

// function template
template <class T> 
T sum(T a, T b) {
    T result; 
    result = a + b; 
    return result; 
}

// non-type template arguments
template <class T, int N> 
T fixed_multiply(T val) {
    return val * N; 
}

int main() {
    // calling 
    int x = 5, y = 2; 
    double n = 5.0, m = 2.0; 
    cout << operate(x,y) << endl; 
    cout << operate(n,m) << endl; 
    cout << sum<int>(x,y) << endl; 
    cout << sum<double>(n,m) << endl; 
    cout << fixed_multiply<int, 2>(10) << endl; 
    cout << fixed_multiply<int, 3>(10) << endl; 
}

