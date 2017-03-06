// 1. Reflection

// - I didn't check test cases before submission. But, I should have done that. It's
//   quite important to this problem. From now, include testing cases when I come up with
//   idea.

// 2. Problem

Given an input string s, reverse the string word by word.
For example, given s = "the sky is blue", return "blue is sky the".

// 3. Initial solution( complexity: time=>O(n) space=>O(n))

class Solution {
public:
    void reverseWords(string &s) {
        stack<string> stk;
        string tempStr = "", ret = "";
        for(int i=0; i<s.size(); i++){
          if(s[i] != ' '){
            tempStr += s[i];
            if(s[i+1] == ' '|| !s[i+1] || s.size()==1){
              stk.push(tempStr);
              tempStr = "";
            }
          }
        }
        while(!stk.empty()){
          ret += stk.top() + " ";
          stk.pop();
        }
        s= ret.substr(0, ret.size()-1);
    }
};

// 4. Improved solution( complexity: time=>O() space=>O() )
