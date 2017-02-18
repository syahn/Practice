// 1. Reflection

// - I failed to solve it. 
// - I just wanted to solve more elloquently, but failed.

// 2. Problem

// Given an array arr, find element pairs whose sum equal the second argument arg
// and return the sum of their indices.
//
// If multiple pairs are possible that have the same numeric elements but different
// indices, return the smallest sum of indices. Once an element has been used,
// it cannot be reused to pair with another.
//
// For example pairwise([7, 9, 11, 13, 15], 20) returns 6. The pairs that sum to 20
// are [7, 13] and [9, 11]. We can then write out the array with their indices and values.
//
// Index	0	1	2	3	4
// Value	7	9	11	13	15
// Below we'll take their corresponding indices and add them.
//
// 7 + 13 = 20 → Indices 0 + 3 = 3
// 9 + 11 = 20 → Indices 1 + 2 = 3
// 3 + 3 = 6 → Return 6

// 3. Initial solution

function pairwise(arr, arg) {
 let sum = 0, pairArr = arr.slice();
 for(i = 0; i < pairArr.length; i++) {
   for(j = i + 1; j < pairArr.length; j++) {
     if(pairArr[i] + pairArr[j] == arg) {
       sum += i + j;
       pairArr[i] = pairArr[j] = NaN;
     }
   }
 }
 return sum;
}

pairwise([1, 1, 1], 2);

// 4. Improved solution
