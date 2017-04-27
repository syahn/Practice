// 1. Reflection

// - Failed. I referred to previous solution. 
// - Seriously, I started to study DP. 

// 2. Problem

// The maximum sum subarray problem consists in finding the maximum sum of a contiguous subsequence in an array or list of integers:

// maxSequence([-2, 1, -3, 4, -1, 2, 1, -5, 4])
// // should be 6: [4, -1, 2, 1]
// Easy case is when the list is made up of only positive numbers and the maximum sum is the sum of the whole array. If the list is made up of only negative numbers, return 0 instead.

// Empty list is considered to have zero greatest sum. Note that the empty list or array is also a valid sublist/subarray.

// 3. Initial solution( complexity: time=>O(N) space=>O(1))

var maxSequence = function(arr){
  let sum = 0, ret = 0;
  for (let i = 0; i<arr.length; i++) {
  	sum = sum + arr[i] > 0 ? sum + arr[i] : 0;
  	ret = sum > ret ? sum : ret;
  }
  return ret;
}

// 4. Improved solution( complexity: time=>O(N) space=>O(1))

var maxSequence = function(arr){
  let sum = 0;
  return arr.reduce((a, c) => {
  	sum = sum + c > 0 ? sum + c : 0;
  	return sum > a ? sum : a;
  }, 0)
}