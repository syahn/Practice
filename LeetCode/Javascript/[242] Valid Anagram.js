// 1. Reflection

// Solved

// 2. Problem

// Given two strings s and t, write a function to determine if t is an anagram of s.

// For example,
// s = "anagram", t = "nagaram", return true.
// s = "rat", t = "car", return false.

// Note:
// You may assume the string contains only lowercase alphabets.

// Follow up:
// What if the inputs contain unicode characters? How would you adapt your solution to such case?

// 3. Initial solution( complexity: time=>O(N) space=>O(N))

/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    if (s.length !== t.length) return false;
    let dict = s.split('').reduce((a, c) => {
        a[c] = a[c] ? a[c] + 1 : 1;
        return a;
    }, {});
    
    for (let i = 0; i < t.length; i++) {
        if(dict.hasOwnProperty(t[i])) {
            dict[t[i]] -= 1;
            if (dict[t[i]] < 0) return false;
        } else {
            return false;
        }
    }
    return true;
};

// 4. Improved solution( complexity: time=>O(N * NlogN) space=>O(1) )

// It's not a faster solution, but it is more intuitive way
var isAnagram = function(s, t) {
    let a = s.split('').sort().join('');
    let b = t.split('').sort().join('');
    return a === b;
};
