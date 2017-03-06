// 1. Reflection

// - I totally crushed by this problem.
// - There are a lot of cases that I have to take account.
// - One thing that I learned is separating whole string into three parts so that
//   I can decrease the cases to check.
// - It was really challenging.

// 2. Problem

Validate if a given string is numeric.


// 3. Initial solution( complexity: time=>O(n) space=>O(1))

class Solution {
public:
   bool isNumber(string str) {
        int s=0, l=str.size();
        bool isDouble = false, isNum = false;
        while(s<l && str[s]==' ') s++;
        if(s<l && (str[s]=='-' || str[s]=='+')) s++;
        while(s<l && isdigit(str[s])){
            s++;
            isNum = true;
        }
        if(str[s] == '.'){
          s++;
          while(s<l && isdigit(str[s])){
            s++;
            isNum = true;
          }
        }
        if(str[s] == 'e' || str[s] == 'E'){
          s++;
          if(str[s] == '+' || str[s] == '-') s++;
          if(s == l || str[s] == ' ') return false;
          while(s<l && isdigit(str[s])) s++;
        }

        while(s<l && str[s] == ' '){
            s++;
        }
        if(s != l) isNum = false;
        return isNum;
    }
};

// 4. Improved solution( complexity: time=>O() space=>O() )
