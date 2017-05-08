// 1. Reflection

// - solved

// 2. Problem

// Sum all the numbers of the array (in F# and Haskell you get a list) except the highest and the lowest element (the value, not the index!).
// (The highest/lowest element is respectively only one element at each edge, even if there are more than one with the same value!)

// Example:

// { 6, 2, 1, 8, 10 } => 16
// { 1, 1, 11, 2, 3 } => 6

// 3. Initial solution( complexity: time=>O() space=>O())

function sumArray(array) {
  let max = Number.MIN_SAFE_INTEGER, min = Number.MAX_SAFE_INTEGER;
  const sum = array.reduce((a, num) => {
    if (max < num) max = num;
    if (min > num) min = num;
    return a + num;
  }, 0);
  return sum - max - min;
}

// 4. Improved solution( complexity: time=>O() space=>O() )

const sumArray = array =>
  (array
    ? array.sort((a, b) => a - b).slice(1, -1).reduce((a, c) => a + c, 0)
    : 0);
