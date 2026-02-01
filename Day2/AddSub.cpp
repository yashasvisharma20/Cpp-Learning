// Write a program that asks the user to enter a number, and then enter a second number. The program should tell the user what the result of adding and subtracting the two numbers is.
#include <iostream>
using namespace std;

int main()
{
    int firstnumber , secondnumber, sum, diff;
    cout<<"Enter an integer: ";
    cin>>firstnumber;
    cout << "Enter another integer: ";
    cin>>secondnumber;
    sum = firstnumber + secondnumber;
    diff = firstnumber - secondnumber;
    cout<<firstnumber<<" + "<<secondnumber << " is " << sum << "." << '\n';
    cout << firstnumber << " - "<< secondnumber << " is " << diff << "." << '\n';
    return 0;
}