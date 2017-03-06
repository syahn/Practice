// 1. Reflection

// - I solved it.
// - Trivial in javascript


// 2. Problem

// Write a function that takes a string as input and returns the string reversed.
//
// Example:
// Given s = "hello", return "olleh".


// 3. Initial solution( complexity: time=>O(n) space=>O(1))

/**
 * @param {string} s
 * @return {string}
 */
var reverseString = function(s) {
  return s.split('').reverse().join('');
};

// 4. Improved solution( complexity: time=>O() space=>O() )
