// 1. Reflection

// - Solved it.
// - Be careful dealing with changing index.

// 2. Problem
//
// Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
//
// For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].
//
// Note:
// You must do this in-place without making a copy of the array.
// Minimize the total number of operations.
//

// 3. Initial solution( complexity: time=>O(n) space=>O(1))

/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
  for (let i = 0, j = 0; i < nums.length; i++) {
    if (nums[j] === 0) {
      nums.splice(j, 1);
      nums.push(0);
    } else j++;
  }
};

// 4. Improved solution( complexity: time=>O() space=>O() )
