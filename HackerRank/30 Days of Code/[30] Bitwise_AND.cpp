// # Reflection

// - Read the conditions carefully!

// # Problem

// Objective
// Welcome to the last day! Today, we're discussing bitwise operations.
// Check out the Tutorial tab for learning materials and an instructional video!
//
// Task
// Given set . Find two integers,  and  (where ), from set  such that the value of
// is the maximum possible and also less than a given integer, .
// In this case,  represents the bitwise AND operator.



// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,a ,b;
    cin >> n;
    while(n--){
        int max = 0;
        scanf("%d %d", &a, &b);
        vector<int> x(a);
        vector<int> y(a);
        for(int i=0; i<a ; i++){
            x[i] = i+1;
            y[i] = i+1;
        }
        for(int j=0; j<a ; j++){
            for(int k=0; k<a; k++){
                int val = x[j] & y[k];
                if(x[j] != y[k] && val < b && val > max) max = val;
            }
        }
        cout << max << endl;
    }
    return 0;
}



// # Improved solution
