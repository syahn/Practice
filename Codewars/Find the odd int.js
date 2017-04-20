// 1. Reflection

// - solved
// - Bit manipulation!!

// 2. Problem

// Given an array, find the int that appears an odd number of times.

// There will always be only one integer that appears an odd number of times.


// 3. Initial solution( complexity: time=>O(N) space=>O(N))


function findOdd(A) {
	let map = {};
  A.forEach(e => {
    map[e] = map[e] ? map[e] + 1 : 1;
  })
  for (let i in map) { 
    if (map[i] % 2 !== 0) {
      return +i;
    }
  }  
  return 0;
}

// 4. Improved solution( complexity: time=>O(N) space=>O(1) )

function findOdd(A) {
	return A.reduce((a,c) => a ^ c);
}