// 1. Reflection

// - I solved it.
// - every & sum function is thug.

// 2. Problem

// Check if the predicate (second argument) is truthy on all elements of a collection (first argument).
//
// Remember, you can access object properties through either dot notation or [] notation.

// 3. Initial solution

function truthCheck(collection, pre) {
  return collection.every(v => v.hasOwnProperty(pre) && v[pre]);
}

// 4. Improved solution

function truthCheck(collection, pre) {
  return collection.every(v => v[pre]);
}
