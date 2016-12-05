// # Reflection

// - Too trivial, but I couldn't pass it one time. What a shame.
// - And actually, there was better way to solve this. Even though it seems trivial,
//   do your best to optimize and come up with better solution.

// # Problem

// Objective
// In this challenge, we're getting started with conditional statements.
// Check out the Tutorial tab for learning materials and an instructional video!
//
// Task
// Given an integer, , perform the following conditional actions:
//
// If  is odd, print Weird
// If  is even and in the inclusive range of  to , print Not Weird
// If  is even and in the inclusive range of  to , print Weird
// If  is even and greater than , print Not Weird
// Complete the stub code provided in your editor to print whether or not  is weird.

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
using namespace std;

int main(){
    int N;
    cin >> N;
    if(N%2) cout << "Weird";
    else if( N >= 2 && N <= 5) cout << "Not Weird";
    else if( N >= 6 && N <= 20) cout << "Weird";
    else cout << "Not Weird";

    return 0;
}

// # Improved solution

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
using namespace std;

int main(){
    int N;
    cin >> N;
    if( N%2 || N >= 6 && N <= 20) cout << "Weird";
    else cout <<"Not Weird";

    return 0;
}
