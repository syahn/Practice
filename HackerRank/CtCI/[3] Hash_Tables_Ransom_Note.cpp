// # Reflection

// - First time to use unordered_map, so it took additional execution steps to figure
// out how it works.
//
// - In Improved solution, I could access the key in unordered_map with bracket notation.
// And if I increase that, it increase value.

// # Problem

// A kidnapper wrote a ransom note but is worried it will be traced back to him.
// He found a magazine and wants to know if he can cut out whole words from it and
// use them to create an untraceable replica of his ransom note.
// The words in his note are case-sensitive and he must use whole words available
// in the magazine, meaning he cannot use substrings or concatenation to create the words he needs.
//
// Given the words in the magazine and the words in the ransom note, print Yes
// if he can replicate his ransom note exactly using whole words from the magazine;
// otherwise, print No.

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

unordered_map<string, int> hashTable;


bool ransom_note(vector<string> ransom) {
    for(string s : ransom){
        auto it = hashTable.find(s);
        if(it == hashTable.end() || it->second < 0) return false;
        it->second--;
    }
    return true;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
        string temp;
        cin >> temp;
        auto iter = hashTable.find(temp);
        if(iter != hashTable.end()){
            iter->second++;
        } else {
           hashTable.insert({temp, 0});
       }
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
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



bool ransom_note(vector<string> magazine, vector<string> ransom) {
    unordered_map<string, int> hash;
    for(auto i : magazine){
        hash[i]++;
    }
    for(auto i : ransom){
        if(hash[i] > 0){
            hash[i]--;
        } else {
            return false;
        }
    }
    return true;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
        cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
