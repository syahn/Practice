// # Reflection

// - too trivial

// # Problem

// Objective
// Today, we're learning and practicing an algorithmic concept called Recursion.
// Check out the Tutorial tab for learning materials and an instructional video!
//
// Recursive Method for Calculating Factorial
// Task
// Write a factorial function that takes a positive integer,  as a parameter and
// prints the result of  ( factorial).
//
// Note: If you fail to use recursion or fail to name your recursive function
// factorial or Factorial, you will get a score of .

// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n){
    if(n == 1) return 1;
    return n * factorial(n-1);
}

int main() {
    int N;
    cin >> N;
    cout << factorial(N) << endl;
    return 0;
}


// # Improved solution
