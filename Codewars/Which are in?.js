// 1. Reflection

// - Solved
// - There were a few ways more to make it neat.

// 2. Problem

// Given two arrays of strings a1 and a2 return a sorted array r in lexicographical order of the strings of a1 which are substrings of strings of a2.

// Example 1:

// a1 = ["arp", "live", "strong"]

// a2 = ["lively", "alive", "harp", "sharp", "armstrong"]

// returns ["arp", "live", "strong"]

// Example 2:

// a1 = ["tarp", "mice", "bull"]

// a2 = ["lively", "alive", "harp", "sharp", "armstrong"]

// returns []

// 3. Initial solution( complexity: time=>O(N^2) space=>O())

function inArray(arr1, arr2) {
  let ret = arr1.filter(key => {
    for (let i = 0; i < arr2.length; i++) {
      if (arr2[i].indexOf(key) > -1) {
        return key;
      }
    }
  });
  return ret.sort();
}

// 4. Improved solution( complexity: time=>O(N^2) space=>O(1) )

function inArray(arr1, arr2) {
  return arr1
    .filter(key => {
      return arr2.some(str => str.indexOf(key) > -1);
    })
    .sort();
}

function inArray(arr1, arr2) {
  return arr1.filter(key => arr2.join(' ').indexOf(key) > -1).sort();
}
