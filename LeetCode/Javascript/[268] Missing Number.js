// 1. Reflection

// - solved.
// - XOR method is awesome!! bit manipulation is like Regex for me. I need to study
//   someday

// 2. Problem

// Given an array containing n distinct numbers taken from 0, 1, 2, ..., n,
// find the one that is missing from the array.
//
// For example,
// Given nums = [0, 1, 3] return 2.
//
// Note:
// Your algorithm should run in linear runtime complexity. Could you implement
// it using only constant extra space complexity?


// 3. Initial solution( complexity: time=>O(N) space=>O(N))

/**
 * @param {number[]} nums
 * @return {number}
 */
// 152ms
var missingNumber = function(nums) {
    let min = 987654321, max = -1;
    let count = {};
    for(let i=0; i<nums.length; i++) {
        min = nums[i] < min ? nums[i] : min;
        max = nums[i] > max ? nums[i] : max;
        count[nums[i]] = 1;
    }
    if(min > 0) return 0;
    for(let i=0; i<=max; i++) {
        if(!count.hasOwnProperty(i)) return i;
    }
    return max+1;
};

//It's bad. complexity: time=>O(N^2) space=>O(1), but 598ms
var missingNumber = function(nums) {
    let min = 987654321, max = -1;
    for(let i=0; i<nums.length; i++) {
        min = nums[i] < min ? nums[i] : min;
        max = nums[i] > max ? nums[i] : max;
    }
    if(min > 0) return 0;
    for(let i=0; i<=max; i++) {
        if(nums.indexOf(i) < 0) return i;
    }
    return max+1;
};

// 4. Improved solution(  )

//SUM approach
//complexity: time=>O(N) space=>O(1) 125ms
var missingNumber = function(nums) {
    let sum = nums.length;
    for(let i=0; i<nums.length; i++) {
        sum += i - nums[i];
    }
    return sum;
};

// XOR approach, but it might be overflow 1
// time=>O(N) space=>O(1) 129ms
var missingNumber = function(nums) {
    let ret = nums.length;
    for(let i=0; i<nums.length; i++) {
        ret ^= i ^ nums[i];
    }
    return ret;
};

// SUM in JS way
// time=>O(N) space=>O(1) 99ms
var missingNumber = function(nums) {
    let N = nums.length;
    return N * (N + 1) / 2 - nums.reduce((a, b) => a + b, 0);
};
