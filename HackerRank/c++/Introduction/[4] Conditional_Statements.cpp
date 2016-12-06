// # Reflection

// -trivial

// # Problem

// if and else are two of the most heavily used conditionals in C/C++.
// They are used to execute zero or one statement among many statements.
//
// They can be used in the following three ways.
//
// if: It is used to execute a statement, given the condition is true.
//
// if(condition) {
//     ...
// }
// if - else: It is used to execute exactly one of the two statements.
//
// if(first condition) {
//     ...
// }
// else {
//     ...
// }
// if - else if - else: It is used to execute one of the multiple statements.
//
// if(first condition) {
//     ...
// }
// else if(second condition) {
//     ...
// }
// .
// .
// .
// else if((n-1)'th condition) {
//
// }
// else {
//     ...
// }
// You are given a positive integer, ,:
//
// If , then print the English representation of it. That is "one" for 1, "two" for 2, and so on.
// Otherwise print "Greater than 9" (without quotes).



// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    if( n > 9) cout << "Greater than 9";
    else if(n==1) cout << "one";
    else if(n==2) cout << "two";
    else if(n==3) cout << "three";
    else if(n==4) cout << "four";
    else if(n==5) cout << "five";
    else if(n==6) cout << "six";
    else if(n==7) cout << "seven";
    else if(n==8) cout << "eight";
    else if(n==9) cout << "nine";
    return 0;
}




// # Improved solution
