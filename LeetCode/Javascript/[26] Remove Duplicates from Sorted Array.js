// 1. Reflection

// - Failed. I cannot satisfy time limit.

// 2. Problem

// Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

// Do not allocate extra space for another array, you must do this in place with constant memory.

// For example,
// Given input array nums = [1,1,2],

// Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.

// Subscribe to see which companies asked this question.

// 3. Initial solution( complexity: time=>O(N^2) space=>O(1))

/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    
    let i = 0, j = nums.length;
    while ( i < j ) {
        i = 0, j = nums.length;
        while(i < j && nums[i] !== nums[i+1]) i++;
        let count = 0, start = i;
        while (i < j && nums[i] === nums[i+1]) {
            count++, i++;   
        }
        if (count) {
            nums.splice(start+1, count);
        }
    }
    return nums.length;
};


// 4. Improved solution( complexity: time=>O(N) space=>O(1) )

var removeDuplicates = function(nums) {
    for (var i = 0, j = 1; i < nums.length-1; i++) {
        if (nums[i] !== nums[i + 1]) nums[j++] = nums[i+1];
    }
    return j;
};
