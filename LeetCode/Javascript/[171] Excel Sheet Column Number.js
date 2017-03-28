// 1. Reflection

// - Solved, but not in optimized way
// - Habitually, I split string to array without deep considerations.
// - Don't forget charCodeAt() and fromCharCode().


// 2. Problem

// Related to question Excel Sheet Column Title
//
// Given a column title as appear in an Excel sheet, return its corresponding column number.
//
// For example:
//
//     A -> 1
//     B -> 2
//     C -> 3
//     ...
//     Z -> 26
//     AA -> 27
//     AB -> 28

// 3. Initial solution( complexity: time=>O(n) space=>O(1))

/**
 * @param {string} s
 * @return {number}
 */
var titleToNumber = function(s) {
    let arrChar = s.split('');
    let ret = 0;

    while(arrChar.length > 0) {
        let newVal = arrChar.shift();
        let num = newVal.charCodeAt(0) - 'A'.charCodeAt(0) + 1;
        ret += Math.pow(26, arrChar.length) * num;
    }
    return ret;
};

// 4. Improved solution( complexity: time=>O(n) space=>O(1) )

var titleToNumber = function(s) {
    let ret = 0;
    for(let i=0; i<s.length; ret = ret * 26 + (s[i].charCodeAt(0) - 'A'.charCodeAt(0) + 1), i++);
    return ret;
};

var titleToNumber = function(s) {
    let ret = 0;
    for(let i=0; i<s.length; ret = ret * 26 + (s[i].charCodeAt(0) - 64), i++);
    return ret;
};
