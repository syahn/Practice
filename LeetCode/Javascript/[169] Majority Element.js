// 1. Reflection

// - Solved
// - Improved one is used by Boyer-Moore Majority Vote Algorithm. It's genious approach.

// 2. Problem

// Given an array of size n, find the majority element.
// The majority element is the element that appears more than ⌊ n/2 ⌋ times.
//
// You may assume that the array is non-empty and the majority element always exist in the array.

// 3. Initial solution( complexity: time=>O(N) space=>O(N))

/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let len = nums.length;
    let count = {};
    for(let i=0; i<len; i++) {
        count[nums[i]] = count[nums[i]] ? count[nums[i]]+1 : 1;
        if(count[nums[i]] > Math.floor(len / 2)) return nums[i];
    }
};

// 4. Improved solution( complexity: time=>O(N) space=>O(1) )

var majorityElement = function(nums) {
    let major = nums[0], count = 1;
    for(let i=1; i<nums.length; i++) {
        if(count === 0) {
            count++;
            major = nums[i];
        } else if (major === nums[i]) {
            count++;
        } else {
            count--;
        }
    }
    return major;
};
