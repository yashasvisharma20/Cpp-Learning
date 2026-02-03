#include <iostream>
using namespace std;

// function for doubling a number
int doubleNumber(int num) {  // copy of variable passed
    return num * 2;         
}

// main function
int main() {
    int number; // variable to store user input
    cout << "Enter a number: ";
    cin >> number;
    cout << "Double of " << number << " is " << doubleNumber(number) << endl;
    return 0;
}