// 1. Reflection

// - Solved.
// - Use hasOwnProperty when I need to check whether prop in Object. It's faster,
//   because it doesn't need to check protypical chain.

// 2. Problem

// Given an array of integers, return indices of the two numbers such that
// they add up to a specific target.
//
// You may assume that each input would have exactly one solution,
// and you may not use the same element twice.

// 3. Initial solution( complexity: time=>O() space=>O())

// complexity: time=>O(N^2) space=>O(1)
var twoSum = function(nums, target) {
  for (let i = 0; i < nums.length; i++) {
    for (let j = 0; j < nums.length; j++) {
      if (i !== j && nums[i] + nums[j] === target) return [i, j];
    }
  }
};

// complexity: time=>O(N^2) space=>O(1))
var twoSum = function(nums, target) {
  for (let i = 0; i < nums.length; i++) {
    let val = target - nums[i];
    let idx = nums.lastIndexOf(val);
    if (idx > 0 && idx !== i) return [i, idx];
  }
};

// 4. Improved solution( complexity: time=>O(N) space=>O(N) )

// 92ms
var twoSum = function(nums, target) {
  let duplicate = {};
  for (let i = 0; i < nums.length; i++) {
    if (duplicate.hasOwnProperty(nums[i])) return [duplicate[nums[i]], i];
    duplicate[target - nums[i]] = i;
  }
};

//112ms
var twoSum = function(nums, target) {
  let duplicate = {};
  for (let i = 0; i < nums.length; i++) {
    if (duplicate[nums[i]] !== undefined) return [duplicate[nums[i]], i];
    duplicate[target - nums[i]] = i;
  }
};
