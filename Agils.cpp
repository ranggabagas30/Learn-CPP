#include <iostream>
#include <cstdio> 
using namespace std; 

int foo(int x[], int a, int b, int i, int j) {
    int k = j;
    int ct = 0;
    while (k > i-1) {
        if (x[k] <= b && !(x[k] <=a)) 
            ct =ct + 1;
        k = k - 1; 
    }
    return ct; 
}

int main() {
    int x[]  = {11,10,10,5,10,15,20,10,7,11}; 
    printf("jawaban 1 = %d\n", foo(x,8,18,3,6)); 
    printf("jawaban 2 = %d\n", foo(x,10,20,0,9)); 
    printf("jawaban 3 = %d\n", foo(x,8,18,6,3)); 
    printf("jawaban 4 = %d\n", foo(x,20,10,0,9)); 
    printf("jawaban 5 = %d\n", foo(x,6,7,8,8)); 
}