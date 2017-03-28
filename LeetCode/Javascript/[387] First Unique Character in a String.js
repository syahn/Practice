// 1. Reflection

// - Solved. But it took more time than I expected. 
// - I learned lastIndexOf!!

// 2. Problem

// Given a string, find the first non-repeating character in it and return it's index.
// If it doesn't exist, return -1.
//
// Examples:
//
// s = "leetcode"
// return 0.
//
// s = "loveleetcode",
// return 2.
// Note: You may assume the string contain only lowercase letters.

// 3. Initial solution( complexity: time=>O(n) space=>O(1))

/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function(s) {
    let arr = s.split('');
    let len = arr.length;
    let count = {};
    if(len === 1) return 0;
    for(let i=0; i<len; i++){
        let val = arr[i];
        count[val] = count[val] ? count[val]+1 : 1;
    }
    for(let i=0; i<len; i++){
        let val = count[arr[i]];
        if(val === 1) return i;
    }
    return -1;
};

var firstUniqChar = function(s) {
    let count = {};
    for(let i=0; i<s.length; i++){
        count[s[i]] = count[s[i]] ? count[s[i]]+1 : 1;
    }
    for(let i=0; i<s.length; i++){
        if(count[s[i]] === 1) return i;
    }
    return -1;
};

// 4. Improved solution( complexity: time=>O(n) space=>O(1) )

/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function(s) {
    for(let i=0; i<s.length; i++){
        if(s.indexOf(s[i]) === s.lastIndexOf(s[i]))
            return i;
    }
    return -1;
};
