// 1. Reflection

// - I failed to solve it. 
// - Even though, I spent much time to understand how Heap's algorithm works, but I
//   couldn't understand fully.

// 2. Problem

// Return the number of total permutations of the provided string that don't have
// repeated consecutive letters. Assume that all characters in the provided string are each unique.
//
// For example, aab should return 2 because it has 6 total permutations
// (aab, aab, aba, aba, baa, baa), but only 2 of them (aba and aba) don't have
// the same letter (in this case a) repeating.


// 3. Initial solution


// 4. Improved solution

// javascript is call by value by default,
// but when passing object it is passing the actual reference
function swap(index1, index2, arr) {
  var tmp;

  tmp = arr[index1];
  arr[index1] = arr[index2];
  arr[index2] = tmp;
}

// check if characters repeat in string
function checkRepeats (str) {
  var exp = /(\w)\1+/g;
  return exp.test(str);
}

function generateNoRepeats(n, arr, result) {
  if (n == 1) {
    // output(A)
    if (!checkRepeats(arr.join(""))) {
      result.push(arr.join(""));
    }
  } else {
    for (var i = 0; i < n - 1; i++) {
      generateNoRepeats(n - 1, arr, result);
      swap ((n%2 == 0) ? 0: i, n - 1 , arr);
    }
    generateNoRepeats(n - 1, arr, result);
  }

  return result;
}

function permAlone(str) {
  var inputArr = str.split("");
  var result = [];

  return generateNoRepeats(inputArr.length, inputArr, result).length;
}

permAlone('aab');
