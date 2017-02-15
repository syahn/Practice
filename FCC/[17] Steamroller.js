// 1. Reflection

// - I solved it with hint. 

// 2. Problem

// Flatten a nested array. You must account for varying levels of nesting.

// 3. Initial solution

function steamrollArray(arr) {
  return arr.reduce((a, b) => a.concat(Array.isArray(b) ? steamrollArray(b) : b), []);
}

// 4. Improved solution
