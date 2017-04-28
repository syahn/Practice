// 1. Reflection

// - Solved

// 2. Problem

// Say you have an array for which the ith element is the price of a given stock on day i.

// If you were only permitted to complete at most one transaction 
// (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit

// 3. Initial solution( complexity: time=>O(N^2) space=>O(1))

var maxProfit = function(prices) {
    let ret = 0, i = 0, j = 1, l = prices.length;
    
    while(i < l) {
        while (prices[i] > prices[i+1]) i++;
         
        for (let j = i+1; j < prices.length && prices[i] < prices[j]; j++) {
            temp = prices[j] - prices[i];    
            ret = Math.max(temp, ret);
        }
        i++;
    }
    return ret;
};

// 4. Improved solution( complexity: time=>O(N) space=>(1) )

var maxProfit = function(prices) {
    let min = Number.MAX_SAFE_INTEGER, max = 0;
    for (let i=0; i<prices.length; i++ ) {
    	min = Math.min(min, prices[i]);
    	max = Math.max(max, prices[i] - min);
    }
    return max;
};