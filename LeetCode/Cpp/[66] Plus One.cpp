// 1. Reflection

// - I solved it.
// - Even though I could optimize first solution further, there is way more concise
//   solution. It's neat and beautiful.

// 2. Problem

// Given a number represented as an array of digits, plus one to the number.


// 3. Initial solution( complexity: time=>O(n) space=>O(1))

vector<int> plusOne(vector<int>& digits) {
    int N = digits.size(), hasOne = 1, s = N-1;
    while(s > -1 && hasOne){
      if(digits[s]==9) {
        digits[s] = 0;
        if(s == 0){
          digits.insert(digits.begin(), 1);
        }
      } else {
        hasOne = 0;
        digits[s]++;
      }
      s--;
    }
    return digits;
}

vector<int> plusOne(vector<int>& digits) {
      int N = digits.size(), hasOne = 1, s = N-1;
      while(s > -1 && hasOne){
        hasOne = digits[s] == 9 ? 1 : 0;
        digits[s] = digits[s] == 9 ? 0 : digits[s] + 1;
        if(digits[s] == 0 && s == 0) digits.insert(digits.begin(), 1);
        s--;
      }
      return digits;
  }

// 4. Improved solution( complexity: time=>O(n) space=>O(1) )

vector<int> plusOne(vector<int>& digits) {
      int s = digits.size() - 1;
      for(int i=digits.size()-1; i>-1; i--){
        if(digits[i] == 9){
          digits[i] = 0;
        } else {
          digits[i]++;
          return digits;
        }
      }
      digits[0] = 1;
      digits.push_back(0);
      return digits;
  }
