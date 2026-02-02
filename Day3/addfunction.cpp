// Introduction to Function
#include <iostream>
using namespace std;

int UserInput(){
    int input;
    cout<<"Enter an integer: ";
    cin >>input;

    return input;
}

int sum(int x, int y){
    int sum;
    sum = x + y;
    
    return sum;
}
int main()
{
    int x {UserInput()};
    int y {UserInput()};

    cout << x << " + " << y << " = " << sum(x,y) << '\n';
    return 0;
}
// Output
// Enter an integer:3
// Enter an integer:4
// 3 + 4 = 7