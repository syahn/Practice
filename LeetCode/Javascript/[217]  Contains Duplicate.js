// 1. Reflection

// - I solved it. 
// - Be careful to use array method like some. It's neat but takes more time I need.
// - Set() is awesome.

// 2. Problem

// Given an array of integers, find if the array contains any duplicates.
// Your function should return true if any value appears at least twice in the array,
// and it should return false if every element is distinct.

// 3. Initial solution( complexity: time=>O() space=>O())

// It exceeds time probably O(N^2)
var containsDuplicate = function(nums) {
  if(nums.length < 2) return false;
  return nums.some(v => nums.indexOf(v) !== nums.lastIndexOf(v));
};

// It passed
var containsDuplicate = function(nums) {
  let count = {};
  for(let i=0; i<nums.length; i++) {
      if(count[nums[i]]) return true;
      count[nums[i]] = 1;
  }
  return false;
};

// 4. Improved solution( complexity: time=>O(?) space=>O(n) )

var containsDuplicate = function(nums) {
  const setNums = new Set(nums);
  return nums.length !== setNums.size;
};

var containsDuplicate = function(nums) {
  return nums.length !== (new Set(nums)).size;
};
