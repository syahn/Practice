// # Reflection

// - practice for implementation of lcs

// # Problem

// A subsequence is a sequence that can be derived from another sequence by
// deleting
// some elements without changing the order of the remaining elements. Longest
// common
// subsequence (LCS) of 2 sequences is a subsequence, with maximal length, which
// is common to both the sequences.
//
// Given two sequence of integers,  and , find any one longest common
// subsequence.
//
// In case multiple solutions exist, print any of them. It is guaranteed that at
// least one non-empty common subsequence will exist.

// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

vector<int> x;
vector<int> y;
vector<vector<int> > c;
vector<vector<int> > b;


void lcsLength() {
    int m = x.size();
    int n = y.size();

    c.resize(m + 1);
    b.resize(m + 1);

    for (int k = 0; k <= m; ++k) {
        c[k].resize(n + 1);
        b[k].resize(n + 1);
    }

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (x[i] == y[j]) {
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = 1;
            } else if (c[i - 1][j] >= c[i][j - 1]) {
                c[i][j] = c[i - 1][j];
                b[i][j] = 0;
            } else {
                c[i][j] = c[i][j - 1];
                b[i][j] = -1;
            }
        }
    }
}

void printLCS(int i, int j) {
    if (!i || !j) {
        return;
    }

    if (b[i][j] == 1) {
        printLCS(i - 1, j - 1);
        cout <<  x[i] << " ";
    } else if (b[i][j] == 0) {
        printLCS(i - 1, j);
    } else {
        printLCS(i, j - 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    int m, n;
    cin >> m >> n;
    x.resize(m + 1);
    y.resize(n + 1);

    for (int i = 1; i <= m; ++i) {
        cin >> x[i];
    }

    for (int j = 1; j <= n; ++j) {
        cin >> y[j];
    }

    lcsLength();
    printLCS(m , n);


    return 0;
}

// # Improved solution
