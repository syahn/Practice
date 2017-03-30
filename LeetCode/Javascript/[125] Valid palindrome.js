// 1. Reflection

// - Solved. But not efficiently
// - Regex is awesome

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
//
// Subscribe to see which companies asked this question.

// 3. Initial solution( complexity: time=>O() space=>O())

/**
 * @param {string} s
 * @return {boolean}
 */

 // 265ms
var isPalindrome = function(s) {
    s = s.toLowerCase().split('').filter(e => {
        const code = e.charCodeAt(0);
        return code >= 97 && code <= 123 || code >= 48 && code <= 57;
    });
    const forward = s.join('');
    const backward = s.reverse().join('');
    return forward === backward;
};

// 4. Improved solution( complexity: time=>O() space=>O() )

// 189ms
var isPalindrome = function(s) {
  var strippedString = s.replace(/\W/g, '');
  var reversedString = strippedString.split('').reverse().join('');

  return strippedString.toLowerCase() == reversedString.toLowerCase();
};

var isPalindrome = function(s) {
    s = s.toLowerCase();
    var strippedString = s.replace(/\W/g, '');
    var reversedString = strippedString.split('').reverse().join('');

    return strippedString == reversedString;
};

// 136ms
var isPalindrome = function(s) {
    let first = 0, last = s.length - 1;

    while(first < last) {
        while(first < last && /\W/g.test(s[first])){
            first++;
        }
        while(first < last && /\W/g.test(s[last])){
            last--;
        }
        if(s[first].toLowerCase() !== s[last].toLowerCase()) {
            return false;
        }
        first++, last--;
    }
    return true;
};
