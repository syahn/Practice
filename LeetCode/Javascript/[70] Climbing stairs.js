// 1. Reflection

// - Failed.
// - I still have difficulty in solvind DP.

// 2. Problem

// You are climbing a stair case. It takes n steps to reach to the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

// Note: Given n will be a positive integer.

// 3. Initial solution( complexity: time=>O() space=>O())

// 4. Improved solution( complexity: time=>O(N) space=>O(1) )

var climbStairs = function(n) {
  if (n <= 0) return 0;
  if (n === 1) return 1;
  if (n === 2) return 2;

  let oneStep = 2, twoStep = 1, allWays = 0;

  for (let i = 2; i < n; i++) {
    allWays = oneStep + twoStep;
    twoStep = oneStep;
    oneStep = allWays;
  }
  return allWays;
};

