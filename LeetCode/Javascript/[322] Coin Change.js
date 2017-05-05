// 1. Reflection

// - It's practice for DP

// 2. Problem

// You are given coins of different denominations and a total amount of money amount. Write a function to compute the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

// Example 1:
// coins = [1, 2, 5], amount = 11
// return 3 (11 = 5 + 5 + 1)

// Example 2:
// coins = [2], amount = 3
// return -1.

// Note:
// You may assume that you have an infinite number of each kind of coin.


// 3. Initial solution( complexity: time=>O() space=>O())

var coinChange = function(coins, amount) {
    if (amount === 0) return 0;
    if (Math.min(...coins) > amount) return -1;
		let cache = {};
		
		const makeChange = amount => {
			if (cache[amount]) return cache[amount];
	    if (!amount) return [];
	    let min = [], newMin;
	    for (let i = coins.length - 1; i > -1; i--) {
	    	let coin = coins[i];
	    	let newAmount = amount - coin;
	    	if (newAmount >= 0) {
	    		newMin = makeChange(newAmount);
	    	}
	    	if (
	    		newAmount >= 0 && 
	    		(newMin.length < min.length - 1 || !min.length) && 
	    		(newMin.length || !newAmount)
	  		) {
	    			min = [coin].concat(newMin);
	    		}
	    }
	    return (cache[amount] = min);
		};
		let ret = makeChange(amount);
    return ret.length === 0 ? -1 : ret.length;
};


// 4. Improved solution( complexity: time=>O() space=>O() )
