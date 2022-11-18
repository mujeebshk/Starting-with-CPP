#include<iostream>

using namespace std;

int main()
{
    int a=10,b=5;
 // Arithmetic operations
    cout << a + b <<endl; //Addition
    cout << a - b <<endl; //Subtraction
    cout << a / b <<endl; //Division
    cout << a * b <<endl; //Multiplication

    cout << a % b <<endl; //Modulo -> Remainder

    cout << ++a <<endl; //Pre-Increment
    cout << --a <<endl; //Pre-decrement
    cout << a++ <<endl; //Post-Increment
    cout << a-- <<endl; //Post-decrement


// Logical operators
    // AND - &&
    // True only when both the expressions are true

    cout << (7>5 && 5!=10) <<endl;
    cout << (2>5 && 5!=10) <<endl;

    // OR - ||
    // True when both the expressions are true or only one of them is true.

    cout << (2>5 || 5!=10) <<endl;
    cout << (2>5 || 5!=5) <<endl;

    // NOT - !
    // Return true if result is false and vice versa.
    cout << !(7>5 && 5!=10) <<endl;

}