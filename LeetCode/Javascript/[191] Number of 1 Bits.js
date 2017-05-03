// 1. Reflection

// - Solved. 
// - Difference between sign-propagating bit shift and zero fill right shift.

// 2. Problem

// Write a function that takes an unsigned integer and returns the number of ’1' bits it has (also known as the Hamming weight).

// For example, the 32-bit integer ’11' has binary representation 00000000000000000000000000001011, so the function should return 3.

// Credits:
// Special thanks to @ts for adding this problem and creating all test cases.

// Subscribe to see which companies asked this question.

// 3. Initial solution( complexity: time=>O() space=>O())

var hammingWeight = function(n) {
    let count = 0;
    while (n !== 0) {
        count += n & 1;
        n = n >>> 1;
    }
    return count;
};

// 4. Improved solution( complexity: time=>O() space=>O() )

/**
 * @param {number} n - a positive integer
 * @return {number}
 */
var hammingWeight = function(n) {
    for (var count = 0; n; count++) {
        n &= n - 1;
    }
    return count;
};