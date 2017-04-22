// 1. Reflection

- Failed
- I will train myself to master Dynamic and Greedy approach from now

// 2. Problem

// You are a professional robber planning to rob houses along a street. 
// Each house has a certain amount of money stashed, the only constraint stopping 
// you from robbing each of them is that adjacent houses have security system 
// connected and it will automatically contact the police 
// if two adjacent houses were broken into on the same night.

// Given a list of non-negative integers representing the amount of money of each house, 
// determine the maximum amount of money you can rob tonight without alerting the police.

// 3. Initial solution( complexity: time=>O() space=>O())


// 4. Improved solution( complexity: time=>O() space=>O() )

/**
 * @param {number[]} nums
 * @return {number}
 */
var rob = function(nums) {
    let curRobBefore = 0;
    let curNotRobBefore = 0;
    
    for (let i=0; i<nums.length; i++) {
        let curRob = curNotRobBefore + nums[i];
        let curNotRob = Math.max(curRobBefore, curNotRobBefore);
        curRobBefore = curRob;
        curNotRobBefore = curNotRob;
    }
    return Math.max(curRobBefore, curNotRobBefore);
};