#include <iostream>
using namespace std;

int five()
{
    return 5;
}

int main()
{
    int a{2};           // initialize with literal
    int b{2+3};        // initialize with computation/expression
    int c{(2*3) + 4}; // initialize with computation/expression
    int d{b};        // initialize with another variable
    int e{five()};   // initialize with function return value
    cout<<a<<'\n'<<b<<'\n'<<c<<'\n'<<d<<'\n'<<e;
    return 0;
    
    //output
    // 2
    // 5
    // 10
    // 5
    // 5
}