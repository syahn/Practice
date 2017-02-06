// 1. Reflection

// - At first, I couldn't understand what this proplem intended. That's bottleneck.
// - I learned we call these kinds of technics like sliding window.

// 2. Problem

// Given a string S, find the length of the longest substring T that contains
// at most two distinct characters.
// For example,
// Given S = “eceba”,
// T is "ece" which its length is 3.

// 3. Initial solution( complexity: time=>O(n) space=>O(n))

int lengthOfLongestSubstring(string str) {
        map<char, int> hash;
        int maxLen = 0, start = -1, hasInTable = 0;
        for(int i=0; i != str.length(); i++){
            if(hasInTable == 2){
              if(hash.count(str[i]) == 0){
                hasInTable = 0;
                start = i;
              }
              maxLen = max(maxLen, i - start);
            } else if(hash.count(str[i]) == 0){
              hasInTable++;
              hash[str[i]] = i;
            } else {
              cout << 'h' << '\n';
              hash[str[i]] = i;
            }
        }
        return maxLen;
    }

// 4. Improved solution( complexity: time=>O() space=>O() )
