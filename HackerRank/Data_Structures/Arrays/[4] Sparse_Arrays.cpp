// # Reflection

// - Had opportunity to practice map

// # Problem

// There are  strings. Each string's length is no more than  characters.
// There are also queries. For each query, you are given a string, and you need to find out how many times this string occurred previously.

// # Initial solution

#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <utility>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int N, Q;
    string t,temp;
    cin >> N;
    map<string, int> m;
    for(int i = 0; i<N; ++i){
        cin >> t;
        if(m[t] == 0) m[t]++;
        else m[t] = 0;
    }
    cin >> Q;
    for(int j=0; j<Q; ++j){
        cin >> temp;
        if(m[temp]) cout << 0 <<'\n';
        cout << m[temp] << "\n";

    }

    return 0;
}



// # Improved solution
