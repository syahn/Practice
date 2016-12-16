// # Reflection

// trivial

// # Problem

// Objective
// Today, we're working with binary numbers. Check out the Tutorial tab for learning
// materials and an instructional video!
//
// Task
// Given a base- integer, , convert it to binary (base-). Then find and print the
// base- integer denoting the maximum number of consecutive 's in 's binary representation.



// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, count = 0;
    int max = -1;

    cin >> N;
    while( N != 0 ){
        count = N % 2 == 1? count + 1: 0;
        if(count > max) max = count;
        N /= 2;
    }
    cout << max << endl;
    return 0;
}


// # Improved solution
