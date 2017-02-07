// 1. Reflection

// - I should admit I was such a idiot. It's quite simple question, even though it has
//   to deal with overflow condition.
// - Remember ret = ret * 10 + x % 10; this expression. I don't need to add and multiply
//   considering the number need to be multiplied.
// 2. Problem

// Reverse digits of an integer. For example: x = 123, return 321.


// 3. Initial solution( complexity: time=>O(n) space=>O(1))

class Solution {
public:
   int reverse(int x) {
  string numStr = to_string(x);
  string ret = "";
  int sign = 1, lastValid = numeric_limits<int>::max() / 10,
      firstValid = numeric_limits<int>::min() / 10;
  if(numStr[0] == '-') sign = -1;
  for(int i=numStr.size()-1; i>-1; i--){
    ret += numStr[i];
    if(sign > 0 && i > 0 && ret.size() == 9 && (lastValid < stoi(ret) ||
        (lastValid == stoi(ret) && (numStr[i-1] - '0') > 7))) return 0;
    if(sign < 0 && ret.size() == 9){
      if(i > 1 && ((firstValid == stoi(ret) * sign && (numStr[i-1]- '0') > 8) || firstValid > stoi(ret) * sign)) return 0;
    }
    if(sign < 0 && i==1) break;
  }
  return stoi(ret) * sign;
}

};
// 4. Improved solution( complexity: time=>O(n) space=>O(1) )

int reverse(int x) {
  int ret = 0;
  while(x != 0){
    if(abs(ret) > numeric_limits<int>::max() / 10){
        return 0;
    }
    ret = ret * 10 + x % 10;
    x /= 10;
  }
  return ret;
}
