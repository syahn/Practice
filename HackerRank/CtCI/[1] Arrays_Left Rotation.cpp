// # Reflection

// - There was template for solution, so I couldn't try to find other way. But, without it,
// I could make this way shorter even though it would not follow intention of maker.

// # Problem

// A left rotation operation on an array of size  shifts each of the array's elements
// unit to the left. For example, if left rotations are performed on array , then the array would become .
//
// Given an array of  integers and a number, , perform  left rotations on the array.
// Then print the updated array as a single line of space-separated integers.


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

vector<int> array_left_rotation(vector<int> a, int n, int k) {
    for(int i=0; i<k; ++i){
        a.push_back(a[i]);
    }
    a.erase(a.begin(), a.begin() + k);
    return a;
}

int main(){
    int n,
        k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
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
#include <unordered_map>

using namespace std;

int main(){
    int n,
        k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[(a_i-k+n)%n] ;
    }
    for(int i = 0; i < n;i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
