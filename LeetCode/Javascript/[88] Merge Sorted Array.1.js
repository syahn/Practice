// 1. Reflection

// - Solved. 
// - When you feel that you didn't utilize conditions fully, that means your solution is not 
  // optimal.

// 2. Problem

// Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

// Note:
// You may assume that nums1 has enough space (size that is greater or equal to m + n) 
// to hold additional elements from nums2. The number of elements initialized 
// in nums1 and nums2 are m and n respectively.

// 3. Initial solution( complexity: time=>O(N^2) space=>O(N))

/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */

// 162ms
var merge = function(nums1, m, nums2, n) {
  while (nums1.length > m)
    nums1.pop();
  while (nums2.length > n)
    nums2.pop();
  for (let i = nums1.length - 1; i > -1; i--) {
    let last = nums2[nums2.length - 1];
    while (nums1[i] < last) {
      nums1.splice(i + 1, 0, nums2.pop());
      last = nums2[nums2.length - 1];
    }
  }
  while (nums2.length > 0)
    nums1.unshift(nums2.pop());
};

// 4. Improved solution( complexity: time=>O(N) space=>O(N) )

var merge = function(nums1, m, nums2, n) {
  let i = m - 1, j = n - 1, k = m + n - 1;

  while (i >= 0 && j >= 0) {
    nums1[k--] = nums1[i] < nums2[j] ? nums2[j--] : nums1[i--];
  }
  while (j >= 0)
    nums1[k--] = nums2[j--];
};

var merge = function(nums1, m, nums2, n) {
  let i = m - 1, j = n - 1, k = m + n;
  while (k--) {
    nums1[k] = i >= 0
      ? nums1[i] < nums2[j] ? nums2[j--] : nums1[i--]
      : nums2[j--];
  }
};
