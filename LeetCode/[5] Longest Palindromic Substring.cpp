// 1. Reflection

// - I failed to come up with idea that can solve it.
// - Everytime I encounter a problem in relation with palindrome, think these three
//   ideas.
//   (1) Stack
//   (2) Comparision with reversed and original one.
//   (3) Counting from center
// - When solving a String problem, try to come up with solution with using only indexes.


// 2. Problem

// Question:
// Given a string S, find the longest palindromic substring in S. You may assume
// that the maximum length of S is 1000, and there exists one unique longest palindromic substring.


// 3. Initial solution( complexity: time=>O() space=>O())


// 4. Improved solution( complexity: time=>O(n^2) space=>O(1) )

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() < 2) return s;
        int len = s.size(), maxLeft = 0, maxLen = 1, left, right;
        for(int start = 0; start<len && len - start > maxLen / 2;){
            left = right = start;
            while(right < len - 1 && s[right] == s[right+1]) right++;
            start = right + 1;
            while(right < len - 1 && left > 0 && s[left-1] == s[right+1]){
                left--;
                right++;
            }
            if(maxLen < right-left+1){
                maxLen = right-left+1;
                maxLeft = left;
            }
        }
        return s.substr(maxLeft, maxLen);
    }
};
