// # Reflection

// - too trivial

// # Problem

// Objective
// In this challenge, we're going to use loops to help us do some simple math.
// Check out the Tutorial tab to learn more.
//
// Task
// Given an integer, , print its first  multiples. Each multiple  (where ) should
// be printed on a new line in the form: n x i = result.


// # Initial solution

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    for (int i=1; i<=10; ++i){
        cout << n << " X " << i << " = " << n*i << "\n";
    }
    return 0;
}


// # Improved solution
