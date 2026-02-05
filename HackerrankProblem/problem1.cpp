// This is hackerrank problem that show use of conditional statement.
// Here we want to print letter to their corresponding number.
// for example if user give input 5, it should print "five".

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp; 
    getline(cin, n_temp);  // input keyword signal

    int n = stoi(ltrim(rtrim(n_temp))); // this code represent conversion of string to letter
    
    // My conditional statemnt logic
    if ( n == 1){
        cout << "one";
    }
    else if ( n == 2) {
        cout << "two";
    }
    else if ( n == 3) {
        cout << "three";
    }
    else if ( n == 4){
        cout << "four";
    }
    else if (n == 5) {
        cout << "five";
    }
    else if (n == 6) {
        cout << "six";
    }
    else if (n == 7) {
        cout << "seven";
    }
    else if (n == 8) {
        cout << "eight";
    }
    else if (n == 9) {
        cout << "nine";
    }
    else {
        cout << "Greater than 9";
    }
    return 0;
}

string ltrim(const string &str) {   // remove left side spacing
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {  // remove right side spacing
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}


