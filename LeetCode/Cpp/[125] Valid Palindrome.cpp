// 1. Reflection

// - I solved it with stack&queue and two pointers. 


// 2. Problem

// Given a string, determine if it is a palindrome, considering only alphanumeric
// characters and ignoring cases.
//
// For example,
// "A man, a plan, a canal: Panama" is a palindrome.
// "race a car" is not a palindrome.
//
// Note:
// Have you consider that the string might be empty? This is a good question to ask during an interview.
//
// For the purpose of this problem, we define empty string as valid palindrome.


// 3. Initial solution( complexity: time=>O(N) space=>O(N))

class Solution {
public:
    bool isPalindrome(string s) {
        stack<char> stk;
        queue<char> que;
        for(int i=0; i<s.size(); i++){
            if(isalnum(s[i])){
               stk.push(tolower(s[i]));
               que.push(tolower(s[i]));
            }
        }
        if(stk.size() != que.size()) return false;
        for(int i=0; i<stk.size(); i++){
            if(stk.top() != que.front()){
                return false;
            } else {
                stk.pop();
                que.pop();
            }
        }
        return true;
    }
};

// 4. Improved solution( complexity: time=>O(n) space=>O(1) )

class Solution {
public:
    bool isPalindrome(string s) {
        int begin = 0,
            end = s.size() -1;
        char firstChar, lastChar;
        while(begin <= end){
            if(isalnum(s[begin])){
                firstChar = tolower(s[begin]);
            } else {
                begin += 1;
                continue;
            }
            if(isalnum(s[end])){
                lastChar = tolower(s[end]);
            } else {
                end -= 1;
                continue;
            }
            if(firstChar != lastChar){
                return false;
            }
            begin += 1;
            end -= 1;
        }
        return true;
    }
};
