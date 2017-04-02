// 1. Reflection

// - Solved. 

// 2. Problem

// Write an algorithm to determine if a number is "happy".
//
// A happy number is a number defined by the following process:
// Starting with any positive integer, replace the number by the sum of the squares
// of its digits, and repeat the process until the number equals 1 (where it will stay),
// or it loops endlessly in a cycle which does not include 1.
// Those numbers for which this process ends in 1 are happy numbers.
//
// Example: 19 is a happy number
//
// 12 + 92 = 82
// 82 + 22 = 68
// 62 + 82 = 100
// 12 + 02 + 02 = 1

// 3. Initial solution( complexity: time=>O(N^2) space=>O(N))

/**
 * @param {number} n
 * @return {boolean}
 */
// 132ms
var isHappy = function(n) {
    let val;
    let map = {};
    while(1) {
        val = n.toString().split('').reduce((a,c) => a+Math.pow(c,2),0);
        if(map.hasOwnProperty(val)) return false;
        if(val === 1) return true;
        map[val] = 1;
        n = val;
    }
};

// It's not imprved, but in different way
var isHappy = function(n) {
    let val;
    let map = new Set();
    while(1) {
        val = n.toString().split('').reduce((a,c) => a+Math.pow(c,2),0);
        if(map.has(val)) return false;
        if(val === 1) return true;
        map.add(val);
        n = val;
    }
};

// 4. Improved solution( complexity: time=>O() space=>O() )
