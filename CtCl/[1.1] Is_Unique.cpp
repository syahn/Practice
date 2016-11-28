# Reflection

// - To make word as lower case, use ascii comparison. (A:65, Z:90, a:97, z:122)
// - In range-based for, accessing one character in string returns char. I didn't
//   find how to access it with specified data type like char, const char*.
//   But auto can make it simple

# Problem

// Implement an algorithm to determine if a string has all unique characters.
// What if you cannot additional data structures?

# Initial solution( Complexity: O(n) )

#include <cstdio>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> arr(150, -1);

string isUnique(string words){
   for(int i=0; i<words.size(); ++i){
      int index = words[i];
      index = index < 97 ? index + 32 : index;
      if(arr[index]) arr[index]++;
      else return "It's not unique";
   }
    return "It's unique";
}

int main() {
    string testCase;
    cin >> testCase;
    cout << isUnique(testCase) << endl;
    return 0;
}

# Improved solution( Complexity: O(n) )

#include <cstdio>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> arr(150,0);

string isUnique(string words){
    for(auto w: words){
        int index = w;
        index = index < 97 ? index + 32 : index;
        if(!arr[index]) arr[index]++;
        else return "It's not unique";
    }
    return "It's unique";
}

int main() {
    string testCase;
    cin >> testCase;
    cout << isUnique(testCase) << endl;
    return 0;
}
