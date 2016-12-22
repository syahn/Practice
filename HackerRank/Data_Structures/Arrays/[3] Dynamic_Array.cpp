// # Reflection

// - I was confused with XOR and bitwise XOR. But, I got to learn how XOR could be
//   implemented by C++, which is !A != !B. Putting ! in front of variable returns
//   bool data type.


// # Problem

// Create a list, , of  empty sequences, where each sequence is indexed from  to
// .
// The elements within each of the  sequences also use -indexing.
// Create an integer, , and initialize it to .
// The  types of queries that can be performed on your list of sequences () are
// described below:
// Query: 1 x y
// Find the sequence, , at index  in .
// Append integer  to sequence .
// Query: 2 x y
// Find the sequence, , at index  in .
// Find the value of element  in  (where  is the size of ) and assign it to .
// Print the new value of  on a new line
// Task
// Given , , and  queries, execute each query.
//
// Note:  is the bitwise XOR operation, which corresponds to the ^ operator in
// most languages.
// Learn more about it on Wikipedia.


// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    int N, Q, type, x, y;
    cin >> N >> Q;
    vector<vector<int> > seqList(N, vector<int>(0));
    int lastAns = 0;

    for (int i = 0; i < Q; i++) {
        cin >> type >> x >> y;
        int idx = (x ^ lastAns) % N;

        if (type == 1) {
            seqList[idx].push_back(y);
        } else if (type == 2) {
            int SIZE = seqList[idx].size();
            lastAns = seqList[idx][y % SIZE];
            cout << lastAns << '\n';
        }
    }

    return 0;
}

// # Improved solution
