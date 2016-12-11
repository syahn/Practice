// # Reflection

// - trivial practice for using map.

// # Problem

// Objective
// Today, we're learning about Key-Value pair mappings using a Map or Dictionary
// data structure. Check out the Tutorial tab for learning materials and an instructional video!
//
// Task
// Given  names and phone numbers, assemble a phone book that maps friends' names
// to their respective phone numbers. You will then be given an unknown number of
// names to query your phone book for. For each queried, print the associated entry
// from your phone book on a new line in the form name=phoneNumber; if an entry for
// is not found, print Not found instead.
//
// Note: Your phone book should be a Dictionary/Map/HashMap data structure.


// # Initial solution
#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    int N, num;
    string name, query;
    cin >> N;
    map<string, int> m;
    for(int i=0; i<N; ++i){
        cin >> name >> num;
        m[name] = num;
    }
    while(cin >> query){

        if(m[query]) cout << query << "=" << m[query] << "\n";
        else cout << "Not found" << "\n";
    }
    return 0;
}


// # Improved solution
