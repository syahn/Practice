// 1. Reflection

// - Solved. 
// - Try to get rid of redundancy!

// 2. Problem

// Write function scramble(str1,str2) that returns true if a portion of str1 characters can be rearranged to match str2, otherwise returns false.

// For example:
// str1 is 'rkqodlw' and str2 is 'world' the output should return true.
// str1 is 'cedewaraaossoqqyt' and str2 is 'codewars' should return true.
// str1 is 'katas' and str2 is 'steak' should return false.

// Only lower case letters will be used (a-z). No punctuation or digits will be included.
// Performance needs to be considered

// 3. Initial solution( complexity: time=>O(N) space=>O(N))
function scramble(str1, str2) {
  let map = {};
  for (let i = 0; i < str1.length; i++) {
    map[str1[i]] = map[str1[i]] ? map[str1[i]] + 1 : 1;
  }

  for (let val of str2) {
    if (map[val]) {
      map[val]--;
      if (map[val] < 0) return false;
    } else {
      return false;
    }
  }
  return true;
}


// 4. Improved solution( complexity: time=>O(N) space=>O(N) )

function scramble(str1, str2) {
  let map = {};
  for ( const e of str1) {
  	map[e] = map[e] ? map[e] + 1 : 1;
  }

  for (let val of str2) {
    if (!map[val]) return false;
    map[val]--;
  }
  return true;
}