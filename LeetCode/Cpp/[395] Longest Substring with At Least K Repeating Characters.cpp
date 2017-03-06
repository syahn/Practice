// 1. Reflection

// - I failed.
// - Recursion!!!


// 2. Problem

// Find the length of the longest substring T of a given string
// (consists of lowercase letters only) such that every character in T appears no less than k times.

// 3. Initial solution( complexity: time=>O() space=>O())

// FAILED
class Solution {
public:
    int longestSubstring(string str, int k) {
        map<char, int> hash;
        int maxLen=0, s=0, f=0, t=-1, l=str.size();
        while(f<=s && s<l){
            if(hash.count(str[s]) != 0){
                if(hash[str[s]] >= k-1){
                    t = s;
                    maxLen = max(maxLen, t-f+1);
                } else {
                    hash[str[s]]++;
                }

            } else {
                hash[str[s]] = 1;
                if(hash[str[s]] >= k){
                    t = s;
                    maxLen = max(maxLen, t-f+1);
                }
            }
            s++;

            if(s == l){
                f++;
                s = f;
                t = s-1;
                hash.clear();
            }
        }
        return maxLen;
    }
};

// 4. Improved solution( complexity: time=>O(worst: n^2 / average: nlogn) space=>O() )

class Solution {
public:
    int longestSubstring(string s, int k) {
        if(s.size() == 0 || k > s.size())   return 0;
        if(k == 0)  return s.size();

        map<char,int> hash;
        for(int i = 0; i < s.size(); i++){
            hash[s[i]]++;
        }

        int idx =0;
        while(idx <s.size() && hash[s[idx]] >= k) idx++;
        if(idx == s.size()) return s.size();

        int left = longestSubstring(s.substr(0 , idx) , k);
        int right = longestSubstring(s.substr(idx+1) , k);

        return max(left, right);

    }
};
