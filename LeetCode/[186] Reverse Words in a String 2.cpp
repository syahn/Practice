// 1. Reflection

// - There are two methods to solve this problem. One is reversing words by words,
//   the other is reversing whole sentence first, and revering each word block.
// - Note to the relationship between char * and string.

// 2. Problem

// Similar to Question [6. Reverse Words in a String], but with the following constraints:
// “The input string does not contain leading or trailing spaces and the words are
// always separated by a single space.”
// Could you do it in-place without allocating extra space?

// 3. Initial solution( complexity: time=>O(n) space=>O(1))

void reverseWords(string &s) {
  if(s.empty()) return ;
  string tempStr="", ret="";
  for(int i=s.size()-1; i>=0; i--){
    if(s[i] != ' '){
      tempStr = s[i] + tempStr;
      if(s[i-1] == ' ' || !s[i-1]){
        ret = ret + tempStr + ' ';
        tempStr = "";
      }
    }
  }
  s = ret.substr(0, s.size());
}

// 4. Improved solution( complexity: time=>O(n) space=>O(1) )

void reverse(string &s, int begin, int end){
  for(int i=0; i<(end-begin)/2; i++){
    char tempChar = s[begin+i];
    s[begin+i] = s[end - i -1];
    s[end-i-1] = tempChar;
  }
}

void reverseWords(string &s) {
  reverse(s, 0, s.size());
  for(int i=0, j=0; i<=s.size(); i++){
    if(i==s.size() || s[i] == ' '){
      reverse(s, j, i);
      j=i+1;
    }
  }
}
