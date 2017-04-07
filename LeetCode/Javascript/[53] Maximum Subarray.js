// 1. Reflection

// - Failed.
// - It's greedy approach.
// - Use Math.max more than i > j

// 2. Problem

// Find the contiguous subarray within an array (containing at least one number)
// which has the largest sum.
//
// For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
// the contiguous subarray [4,-1,2,1] has the largest sum = 6.

// 3. Initial solution( complexity: time=>O() space=>O())


// 4. Improved solution( complexity: time=>O(N) space=>O(1) )

/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let ret = nums[0], sum = 0;
    for(let i=0; i<nums.length; i++) {
        sum += nums[i];
        ret = Math.max(ret, sum);
        sum = Math.max(sum, 0);
    }
    return ret;
};
