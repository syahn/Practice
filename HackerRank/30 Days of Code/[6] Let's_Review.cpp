// # Reflection

// - At first, I didn't use string header file, but tried to solve it with only character.
//   Therefore, I tried to read one character at a time, but it didn't work well, since
//   I had to take care of newlines constantly. Finally, I thought I solved problem,
//   and ran it on the Repl, then it worked. However it didn't work well in actual
//   submission page. It fired off with broken characters.


// # Problem

// Objective
// Today we're expanding our knowledge of Strings and combining it with what
// we've
// already learned about loops. Check out the Tutorial tab for learning
// materials and an instructional video!
//
// Task
// Given a string, , of length  that is indexed from  to , print its
// even-indexed
// and odd-indexed characters as  space-separated strings on a single line
// (see the Sample below for more detail).


// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        string s;
        string s1;
        string s2;
        cin >> s;

        for (int j = 0; j < s.size(); ++j) {
            if (!(j % 2)) s1 += s[j];
            else s2 += s[j];
        }
        cout << s1 << " " << s2 << "\n";
    }

    return 0;
}

// # Improved solution
