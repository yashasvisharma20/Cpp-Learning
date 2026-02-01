/*#include <iostream>
using namespace std;

int main()
{
    // initialize variable with name 'number' to store user input
    int number;
    // ask user for input
    cout << "Enter an integer: ";
    // read user input and store it in 'number'
    cin >> number;
    // print result
    cout << "Double that number is : " << number * 2 << endl;
    // if all statements execute successfully, operating system will receive 0
    return 0;
}*/

// output
// Enter an integer: 4
// Double that number is : 8

// Now I have challenge that how can i modified the solutuon to the best solution?
// We can do one thing that we can make two different variable named double and triple and store the values in them and print it out.

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int doublevalue = number * 2;
    int triplevalue = number * 3;
    cout << " Double " << number << " is : " << doublevalue << endl;
    cout << " Triple " << number << " is : " << triplevalue << endl;
    return 0;
}

