#include <iostream>
using namespace std; 

// non-pointer variable 
int number = 1; 
int number2 = 10; 

// pointer declaration 
int* ptr; 
int *ptr2 = &number2; 
int *ptr3 = NULL; // pointer points to nothing 
int *ptr4 = 0;  // pointer points to nothing 

// references or alias 
// Once a reference is established to a variable, you cannot change the reference to reference another variable.
int &referenceNumber = number; 

// passing the return-value as reference 
int & squareRef(int &);
int * squarePtr(int *); 
int & addBy10Ref(int); 
int * addBy10Ptr(int); 

// passing the dynamically allocated memory as return-value by reference
int main() {
    ptr = &number; 
    cout << "Address of variable number: " << ptr << " or " << &number << endl; 
    cout << "Address of variable ptr: " << &ptr << endl; 
    cout << "value of number: " << *ptr << " or " << number << endl; 
    cout << "Address of variable number2: " << ptr2 << " or " << &number2 << endl; 
    cout << "Address of variable ptr2: " << &ptr2 << endl; 
    cout << "value of number2: " << *ptr2 << " or " << number2 << endl; 

    number = number * 2; 

    cout << "Value of number is changed to: " << number << " or " << *ptr << endl; 

    *ptr = 30; 

    cout << "Value of *ptr is changed to: " << number << " or " << *ptr << endl; 

    //cout << "Value of *ptr3" << *ptr3 << endl; // uncomment this line to make segmentation fault 

    cout << "Value of referenceNumber: " << referenceNumber << " or " << number << endl; 

    referenceNumber = 99; 

    cout << "New value of referenceNumber: " << referenceNumber << " or " << number << endl; 

    cout << "In main() &number: " << &number << endl; 
    int & resultSquareRef = squareRef(number); 
    cout << "In main() &resultSquareRef: " << &resultSquareRef << endl; 
    cout << resultSquareRef << endl; 
    cout << number << endl; 

    cout << "In main() &number2: " << &number2 << endl; 
    int * resultSquarePtr = squarePtr(&number2); 
    cout << "In main() resultSquarePtr: " << resultSquarePtr << endl; 
    cout << *resultSquarePtr << endl; 
    cout << number2 << endl; 


    cout << "Dynamically allocated memory" << endl; 
    cout << *addBy10Ptr(number) << endl; 
    cout << addBy10Ref(number) << endl; 
    
}

int & squareRef(int & rNumber) {
    cout << "In squareRef(): " << &rNumber << endl; 
    rNumber *= rNumber; 
    return rNumber; 
}

int * squarePtr(int * ptrNumber) {
    cout << "Int squarePtr(): " << ptrNumber << endl; 
    *ptrNumber *= *ptrNumber; 
    return ptrNumber; 
}

int & addBy10Ref(int number) {
    int * dynamicallyAllocated = new int(number * number); 
    return *dynamicallyAllocated; 
}

int * addBy10Ptr(int number) {
    int * dynamicallyAllocated = new int(number * number); 
    return dynamicallyAllocated; 
}
