// 1. Reflection

// - I solved it.
// - Extra space doesn't mean extra white space.
// - Without considering conditions, there are 3 different solution for solving this.
//   1. Conversion to strings
//   2. Comparison with reversed integer
//   3. Two pointers

// 2. Problem

// Determine whether an integer is a palindrome. Do this without extra space.

// 3. Initial solution( complexity: time=>O(n) space=>O(1))

// integer to string
bool isPalindrome(int x) {
    string N = x > 0 ? to_string(x) : to_string(x * -1);
    int s = 0, l = N.size() - 1;
    while(s < l){
      if(N[s] != N[l]) return false;
      s++, l--;
    }
    return true;
}

// Comparison with reversed integer.
bool isPalindrome(int x) {
  if(x<0) return false;
  int origin = x;
  int reversed = 0;
    while(x != 0){
      if(abs(reversed) > numeric_limits<int>::max() / 10) return false;
      if(abs(reversed) == numeric_limits<int>::max() / 10 && x % 10 > 7) return false;
      reversed = reversed * 10 + x % 10;
      x /= 10;
    }
    cout << reversed << '\n' << origin << '\n';
    if(reversed != origin) return false;
    return true;
}

// 4. Improved solution( complexity: time=>O(n) space=>O(1) )

bool isPalindrome(int x) {
  if (x < 0) return false;
  int div = (int)pow(10,floor(log10(x)));
  while(x != 0){
    int l = x / div;
    int r = x % 10;
    if( l != r) return false;
    x = (x % div) / 10;
    div /= 100;
  }
  return true;
}
