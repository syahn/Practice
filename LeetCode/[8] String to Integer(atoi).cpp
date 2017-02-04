// 1. Reflection

// - I failed to solve this. Solution I posted under initial solution part cannot
//   passed the overflow cases successfully.
// - It was quite good practice to consider many test cases happening around conversion
//   between number data type and string data type.
// - First time to use numeric_limits! It's good.
// - Solve this again someday.
// - I'm crushed by this problem.

// 2. Problem


// 3. Initial solution( complexity: time=>O() space=>O())

class Solution {
public:
    int myAtoi(string str) {
        string ret = "";
        for(int i=0; i<str.size(); i++){
          char c = str[i], nextC = str[i+1];
          if(!ret.empty() && (c == '-' || c == '+')){
            return 0;
          } else if(ret.empty() && (c == '-' || c == '+')){
            ret += c;
          } else if('0' <= c && c <= '9'){
                 if(nextC < '0' || nextC > '9'){
                    ret += c;
                    break;
                } else {
                    ret += c;
                }
            }
        }
        int retNum = 0;
        for(int i=ret.size()-1, j=0; i>=0 ; i--,j++){
            if(ret[i] == '-'){
                retNum *= -1;
                break;
            } else if(ret[i] == '+'){
              break;
            } else {
              int c = ret[i] - '0';
              retNum += c * pow(10, j);
            }
        }
        return retNum;
    }
};

// 4. Improved solution( complexity: time=>O(n) space=>O(1) )

class Solution {
public:
    int myAtoi(string str) {
        int maxDiv10 = numeric_limits<int>::max() / 10;
        int s=0, l=str.size();
        while(s<l && str[s] == ' ') s++;
        int sign = 1;
        if(s<l && str[s] == '+'){
            s++;
        } else if(s<l && str[s] == '-'){
            s++;
            sign = -1;
        }
        int num = 0;
        while(s<l && (str[s] >= '0' && str[s] <= '9')){
            int digit = str[s] - '0';
            if(num > maxDiv10 || num == maxDiv10 && digit >= 8){
                return sign == 1 ? numeric_limits<int>::max() : numeric_limits<int>::min();
            }
            num = num*10 + digit;
            s++;
        }
        return sign*num;
    }
};
