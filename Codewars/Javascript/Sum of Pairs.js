// 1. Reflection

// - Failed.
// - I still don't know the answer. It exceeds time limit.

// 2. Problem

// Sum of Pairs

// Given a list of integers and a single sum value, 
// return the first two values (parse from the left please) in order of appearance that add up to form the sum.

// 3. Initial solution( complexity: time=>O() space=>O())

var sum_pairs = function(arr, s) {
  let minPair = [];
  for (let i = 0; i < arr.length; i++) {
    let findThis = s - arr[i];
    let j = i+1;
    let maximum = minPair.length ? minPair[1] : arr.length;
    while(j < maximum) {
    	if (arr[j] === findThis) {
        minPair = minPair.length
          ? minPair[1] > j ? [i, j] : minPair
          : [i, j];
      }
      j++;
    }
  }
 
  if (minPair[1]) return [arr[minPair[0]], arr[minPair[1]]];
  else return undefined;
}

// 4. Improved solution( complexity: time=>O() space=>O() )
