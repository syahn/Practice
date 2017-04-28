// 1. Reflection

// - Solved, It's easy

// 2. Problem

// Say you have an array for which the ith element is the price of a given stock on day i.

// Design an algorithm to find the maximum profit. 
// You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times). 
// However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).

// 3. Initial solution( complexity: time=>O(N) space=>O(1))

/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let ret = 0, min = prices[0];
    for (let i = 1; i<prices.length; i++) {
        if (prices[i] > min) {
            ret += prices[i] - min;
            min =  prices[i];
        } else {
            min = Math.min(prices[i], min);
        }
    }
    return ret;
};

// 4. Improved solution( complexity: time=>O(N) space=>(1) )

/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let ret = 0;
    for (let i = 1; i<prices.length; i++) {
        ret += Math.max(prices[i] - prices[i-1], 0);
    }
    return ret;
};