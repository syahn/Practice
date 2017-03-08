// 1. Reflection

// - Solved in inefficient way
// - Bit manipulation is huge win.
// - There were 5 different ways of solving. Interesting.

// 2. Problem

// Given an array of integers, every element appears twice except for one.
// Find that single one.
//
// Note:
// Your algorithm should have a linear runtime complexity.
// Could you implement it without using extra memory?


// 3. Initial solution(complexity: time=>O(n) space=>O(n))
/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    let ret = [];
    for (let i=0; i<nums.length; i++){
        const idx = ret.indexOf(nums[i]);
        if(idx < 0){
            ret.push(nums[i]);
        } else {
            ret.splice(idx, 1);
        }
    }
    return ret[0];
};

var singleNumber = function(nums) {
    for (let i=0; i<nums.length; i++){
        const idx = nums.indexOf(nums[i], i+1);
        if(idx === -1){
            return nums[i];
        } else {
            nums.splice(idx, 1);
        }
    }
};

var singleNumber = function(nums) {
    let hash = {};
    for (let i=0; i<nums.length; i++){
        if(!hash[nums[i]]){
            hash[nums[i]]=1;
        } else{
            hash[nums[i]]=2;
        }
    }
    for (let v in hash){
        if(hash[v] === 1) return Number(v);
    }
};



// 4. Improved solution( complexity: time=>O(n) space=>O(1) )

var singleNumber = function(nums) {
    let ret = 0;
    for (let i=0; i<nums.length; i++){
        ret ^= nums[i];
    }
    return ret;
};

function singleNumber(nums) {
	return nums.reduce((prev, curr) => prev ^ curr, 0);
}
