// This program is for implementing for loop.
// This program take two input (a,b) from user by new line and it should give output:
// 1. Letter Representation of number
// 2. if n > 9 and its even, print "even"
// 3. if n > 9 and its odd, print "odd"
// example:
// Input : 
// 8
// 11
// Output :
// eight
// eleven
// even
// odd

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    for (int i = a; i <= b; i++){
        if (i == 1){
            cout << "one"<<endl;
        }
        else if (i == 2) {
            cout << "two"<<endl;
        }
        else if ( i == 3) {
            cout << "three"<<endl;
        }
        else if (i == 4) {
            cout << "four"<<endl;
        }
        else if (i == 5) {
            cout << "five"<<endl;
        }
        else if (i == 6) {
            cout << "six"<<endl;
        }
        else if (i == 7) {
            cout << "seven"<<endl;
        }
        else if (i == 8) {
            cout << "eight"<<endl;
        }
        else if (i == 9) {
            cout << "nine"<<endl;
        }
    }
    if (a % 2 == 0){
        cout << "even" << endl;
    }
    else if (a % 2 != 0){
        cout << "odd" << endl;
    }
    if (b % 2 == 0){
        cout << "even" << endl;
    }
    else if (b % 2 != 0){
        cout << "odd" << endl;
    }
    
    return 0;
}