// 1. Reflection

// - Failed to solve it. 
// - I thought bit manipulation somehow, but I need more practice.

// 2. Problem

// Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.
//
// Example:
// Given a = 1 and b = 2, return 3.
//
// Credits:
// Special thanks to @fujiaozhu for adding this problem and creating all test cases.

// 3. Initial solution( complexity: time=>O() space=>O())


// 4. Improved solution( complexity: time=>O(n) space=>O(1) )

/**
 * @param {number} a
 * @param {number} b
 * @return {number}
 */
var getSum = function(a, b) {
    return b === 0 ? a : getSum(a ^ b, (a & b) << 1);
};
