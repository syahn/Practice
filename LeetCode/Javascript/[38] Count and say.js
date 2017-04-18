// 1. Reflection

// - Solved.

// 2. Problem

// The count-and-say sequence is the sequence of integers beginning as follows:
// 1, 11, 21, 1211, 111221, ...
//
// 1 is read off as "one 1" or 11.
// 11 is read off as "two 1s" or 21.
// 21 is read off as "one 2, then one 1" or 1211.
// Given an integer n, generate the nth sequence.
//
// Note: The sequence of integers will be represented as a string.

// 3. Initial solution( complexity: time=>O() space=>O())

/**
 * @param {number} n
 * @return {string}
 */
//142ms
var countAndSay = function(n) {
  let seq = "1", count = 1, ret = "";
  for (
    let k = 0, i = 0;
    i < n - 1;
    i++, (k = 0), (count = 1), (seq = ret), (ret = "")
  ) {
    while (k < seq.length) {
      while (seq[k + 1] && seq[k] === seq[k + 1])
        count++, k++;
      if (!seq[k + 1]) {
        ret += count.toString() + seq[k];
        break;
      }
      if (seq[k] !== seq[k + 1]) {
        ret += count.toString() + seq[k++];
      }
      count = 1;
    }
  }
  return seq;
};

/**
 * @param {number} n
 * @return {string}
 */
//92ms
var countAndSay = function(n) {
  let seq = "1", count = 1, ret = "";
  for (
    let k = 0, i = 0;
    i < n - 1;
    i++, (k = 0), (count = 1), (seq = ret), (ret = "")
  ) {
    while (k < seq.length) {
      while (seq[k + 1] && seq[k] === seq[k + 1])
        count++, k++;
      if (seq[k] !== seq[k + 1]) ret += count.toString() + seq[k++];
      count = 1;
    }
  }
  return seq;
};

var countAndSay = function(n) {
  let seq = "1", count = 1, ret = "";
  for (let k = 0; --n; (k = 0), (count = 1), (seq = ret), (ret = "")) {
    while (k < seq.length) {
      while (seq[k + 1] && seq[k] === seq[k + 1])
        count++, k++;
      if (seq[k] !== seq[k + 1]) ret += count.toString() + seq[k++];
      count = 1;
    }
  }
  return seq;
};

// 4. Improved solution( complexity: time=>O() space=>O() )
