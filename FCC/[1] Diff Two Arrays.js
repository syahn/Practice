// 1. Reflection

// - I solved it in imperative way.
// - The includes() method determines whether an array includes a certain element,
//   returning true or false as appropriate.

// 2. Problem

// Compare two arrays and return a new array with any items only found in one of
// the two given arrays, but not both. In other words, return the symmetric
// difference of the two arrays.

// 3. Initial solution

function diffArray(arr1, arr2) {
  return arr1.concat(arr2).filter(function(val){
    return arr1.indexOf(val) < 0 || arr2.indexOf(val) < 0;
  });
}

// 4. Improved solution

function diffArray(arr1, arr2) {
  return arr1.concat(arr2).filter(val => {
    return !arr1.includes(val) || !arr2.includes(val);
  });
}

function diffArray(arr1, arr2) {
  return arr1.filter(val => !arr2.includes(val))
             .concat(arr2.filter(val=> !arr1.includes(val)));
}
