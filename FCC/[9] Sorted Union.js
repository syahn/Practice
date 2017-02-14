// 1. Reflection

// - I solved it. 
// - Destruction is quite useful for normalizing.
// - With help of es6, it can come down to one line.

// 2. Problem

// Write a function that takes two or more arrays and returns a new array of unique
// values in the order of the original provided arrays.
//
// In other words, all values present from all arrays should be included in their
// original order, but with no duplicates in the final array.
//
// The unique numbers should be sorted by their original order, but the final array
// should not be sorted in numerical order.
//
// Check the assertion tests for examples.


// 3. Initial solution

function uniteUnique(arr) {
  const newArr = Object.keys(arguments).map(i => arguments[i]).reduce((a, c)=>a.concat(c),[]);
  let ret = [];
  newArr.forEach( v => {
    if(ret.indexOf(v) < 0) ret.push(v);
  });
  return ret;
}

// 4. Improved solution

function uniteUnique(arr) {
  return Object
    .keys(arguments)
    .map(i => arguments[i])
    .reduce((a, c)=>a.concat(c.filter(v => a.indexOf(v) == -1)),[]);
}

function uniteUnique(...arr) {
  return arr.reduce((a, c)=>a.concat(c.filter(v => a.indexOf(v) == -1)),[]);
}
