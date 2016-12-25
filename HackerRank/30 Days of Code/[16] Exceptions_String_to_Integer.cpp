// # Reflection

// - It was my first time handling exception with c++. 

// # Problem

// Objective
// Today, we're getting started with Exceptions by learning how to parse an integer
// from a string and print a custom error message. Check out the Tutorial tab for
// learning materials and an instructional video!
//
// Task
// Read a string, , and print its integer value; if  cannot be converted to an integer,
// print Bad String.

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
    string S;
    cin >> S;
    try{
        int temp = stoi(S);
        cout << temp << endl;
    }

    catch(...){
        cout << "Bad String"<< endl;
    }

    return 0;
}

// # Improved solution
