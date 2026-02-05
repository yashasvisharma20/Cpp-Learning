// Understand use of forward declaration/function delaration

#include <iostream>
using namespace std;

// Forward declaration
int add(int a, int b);
int multiply(int a, int sum);

int sum{};

// Execute main function first
int main (){
    cout << multiply(3,add(2,3)) << endl;
    return 0;
}

// Computing sum of two number
int add(int a, int b){
    sum = a + b;
    return sum; 
}

// multiply two number 
int multiply(int a, int b){
    int result{};
    result = a * b;
    return result;
}
