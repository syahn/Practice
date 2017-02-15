// 1. Reflection

// - I solved it. 
// - I've learned two new method, which are findIndex() and shift();


// 2. Problem

// Drop the elements of an array (first argument), starting from the front, until
// the predicate (second argument) returns true.
//
// The second argument, func, is a function you'll use to test the first elements
// of the array to decide if you should drop it or not.
//
// Return the rest of the array, otherwise return an empty array.


// 3. Initial solution

function dropElements(arr, func) {
  for(let i=0; i<arr.length-1; i++){
    if(func(arr[i])) return arr.slice(i);
  }
  return [];
}

// 4. Improved solution

function dropElements(arr, func) {
  while(arr.length > 0 && !func(arr[0])) {
    arr.shift();
  }
  return arr;
}

function dropElements(arr, func) {
  return arr.slice(arr.findIndex(func) >= 0 ? arr.findIndex(func) : arr.length);
}
