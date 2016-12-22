// # Reflection

// - trivial

// # Problem

// An array is a type of data structure that stores elements of the same type in
// a
// contiguous block of memory. In an array, , of size , each memory location has
// some unique index,  (where ), that can be referenced as  (you may also see it
// written as ).
//
// Given an array, , of  integers, print each element in reverse order as a
// single
// line of space-separated integers.


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


int main() {
    int n;

    cin >> n;
    vector<int> arr(n);

    for (int arr_i = 0; arr_i < n; arr_i++) {
        cin >> arr[arr_i];
    }

    for (int i = n - 1; i > -1; --i) {
        cout << arr[i] << ' ';
    }
    return 0;
}

// # Improved solution
