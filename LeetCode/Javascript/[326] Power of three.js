// 1. Reflection

// - solved in Naive way
// - I learned toString([radix])

// 2. Problem

// Given an integer, write a function to determine if it is a power of three.
//
// Follow up:
// Could you do it without using any loop / recursion?

// 3. Initial solution( complexity: time=>O(N) space=>O(1))

/**
 * @param {number} n
 * @return {boolean}
 */
//509ms
var isPowerOfThree = function(n) {
    while(n > 2) n = n / 3;
    return n === 1;
};

//452ms
var isPowerOfThree = function(n) {
    if(n < 3) return n === 1;
    return isPowerOfThree(n/3);
};

// 4. Improved solution( complexity: time=>O(N) space=>O(1) )

//532ms
var isPowerOfThree = function(n) {
    return /^10*$/.test(n.toString(3));
};
