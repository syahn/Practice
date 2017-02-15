// 1. Reflection

// - I solved it. 
// - First use of findElement.

// 2. Problem

// Create a function that looks through an array (first argument) and
// returns the first element in the array that passes a truth test (second argument).

// 3. Initial solution

function findElement(arr, func) {
  for(let v of arr) if(func(v)) return v;
}

// 4. Improved solution

function findElement(arr, func) {
  return arr.filter(func)[0];
}
