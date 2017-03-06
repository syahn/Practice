// 1. Reflection

// - I solved it with hints provided in docs.
// - Please, try to use while loop so that I could solve concisely

// 2. Problem

// Given two strings S and T, determine if they are both one edit distance apart.

// 3. Initial solution( complexity: time=>O(n) space=>O(1))

bool isOneEdit(string s, string t){
  int m = s.size(), n = t.size();
  if(m - n > 1 || m - n < -1 ) return false;

  if(m > n){
    int temp = m;
    n = m;
    m = temp;
    s.swap(t);
  }
  // Replace operation
  if(m == n){
    bool once = false;
    for(int i=0; i<m; i++){
      if(s[i] != t[i]){
        if(once) return false;
        once = true;
      }
    }
    if(once) return true;
  }
  // Insert operation
  else {
    if(t.front() + s == t || s + t.back() == t)
      return true;

    for(int j=0; j<m; j++){
      if(s[j] != t[j]){
        string newStr = s.substr(0, j) + t[j] + s.substr(j);
        cout << newStr << '\n';
        if(newStr == t) return true;
      }
    }
    return false;
  }
}

// 4. Improved solution( complexity: time=>O(n) space=>O(1) )

bool isOneEdit(string s, string t){
  int m = s.size(), n = t.size();
  if(m > n) return isOneEdit(t, s);
  if(n - m > 1 ) return false;
  int i = 0, shift = n - m;
  while(i<m && s[i] == t[i]) i++;
  if(i == m) return shift > 0;
  if(shift == 0) i++;
  while(i<m && s[i] == t[i+shift]) i++;
  return i == m;
}
