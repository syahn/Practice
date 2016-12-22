// # Reflection

// - Note how 2d arrays initialized with vector

// # Problem

// Context
// Given a  2D Array, :
//
// 1 1 1 0 0 0
// 0 1 0 0 0 0
// 1 1 1 0 0 0
// 0 0 0 0 0 0
// 0 0 0 0 0 0
// 0 0 0 0 0 0
// We define an hourglass in  to be a subset of values with indices falling in
// this
// pattern in 's graphical representation:
//
// a b c
//   d
// e f g
// There are  hourglasses in , and an hourglass sum is the sum of an hourglass'
// values.
//
// Task
// Calculate the hourglass sum for every hourglass in , then print the maximum
// hourglass sum.

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
    vector<vector<int> > arr(6, vector<int>(6));
    int max = -87654321;

    for (int arr_i = 0; arr_i < 6; arr_i++) {
        for (int arr_j = 0; arr_j < 6; arr_j++) {
            cin >> arr[arr_i][arr_j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int count = arr[i][j] +  arr[i][j + 1] + arr[i][j + 2] +
                        arr[i + 1][j + 1] +
                        arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];

            if (count > max) max = count;
        }
    }
    cout << max << endl;
    return 0;
}

// # Improved solution
