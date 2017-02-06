// 1. Reflection

// - I failed this too. I limited the range of substring as just alpha numeric character.
//   but, it can include ascii or unicodes too.
// - Improved one is very ellegant solution. It used table to memorise characters.
// - If I were solver, I would reset the current string continuously, but he solved it
//   with comparison of index. It's great way!

// 2. Problem

// Given a string, find the length of the longest substring without repeating characters.
//
// Examples:
//
// Given "abcabcbb", the answer is "abc", which the length is 3.
//
// Given "bbbbb", the answer is "b", with the length of 1.
//
// Given "pwwkew", the answer is "wke", with the length of 3.
// Note that the answer must be a substring, "pwke" is a subsequence and not a substring.


// 3. Initial solution( complexity: time=>O(n) space=>O(1))

 // -> It failed
class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        string maxStr="", tempStr = "";
        int s = 0, f=1, l = str.size(), maxLen = 0;
        while(s<l && !isalnum(str[s])) s++;
        while(s<l && isalnum(str[s])){
            if(tempStr.find(str[s]) == string::npos){
                tempStr += str[s];
                if(s+1 == l || !isalnum(str[s+1])) {
                  if(tempStr.size() > maxLen){
                    maxLen = tempStr.size();
                  }
                }
                s++;
            } else {
                if(tempStr.size() > maxLen){
                    maxStr = tempStr;
                    maxLen = tempStr.size();
                }
                tempStr = "";

            }
            while(s<l && !isalnum(str[s])) {
              s++;
              tempStr = "";
            }
            if(s == l && f < l){
                s = f++;
                tempStr="";
            }
        }
        return maxLen;
    }
};

// 4. Improved solution( complexity: time=>O(n) space=>O(1) )

class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        vector<int> dict(256,-1);
        int maxLen = 0, start = -1;
        for(int i=0; i != str.length(); i++){
            if(dict[str[i]] > start){
                start = dict[str[i]];
            }
            dict[str[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
};


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> charMap;
        int maxLen = 0, start = -1;
        for (int i = 0; i != s.length(); i++) {
            if (charMap.count(s[i]) != 0)
                start = max(start, charMap[s[i]]);
            charMap[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
    return maxLen;
}
};
