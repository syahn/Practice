// # Reflection

// - At first, I solved it with vector. But, there was limitation for specification
// of header files.

// - I learned how to declare the new keyword with array

// # Problem

// Consider an -element array, , where each index  in the array contains a reference
// to an array of  integers (where the value of  varies from array to array).
// See the Explanation section below for a diagram.
//
// Given , you must answer  queries. Each query is in the format i j, where
// denotes an index in array  and denotes an index in the array located at .
// For each query, find and print the value of element  in the array at location  on a new line.

// # Initial solution

#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int * arr[n];

    for(int i = 0; i<n; i++){
        int N;
        cin >> N;
        int * addr = new int[N];
        for(int j = 0; j<N; ++j){
            int temp;
            cin >> temp;
            addr[j] = temp;
        }
        arr[i] = addr;
    }

    for(int i = 0; i<q; ++i){
        int a,b;
        cin >> a >> b;
        cout << arr[a][b] << "\n";
    }

}

// # Improved solution
