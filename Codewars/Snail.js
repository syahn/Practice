// 1. Reflection

// - Solved, but in the uglist way.

// 2. Problem

// Given an n x n array, return the array elements arranged from outermost elements to the middle element, traveling clockwise.

// array = [[1,2,3],
//          [4,5,6],
//          [7,8,9]]
// snail(array) #=> [1,2,3,6,9,8,7,4,5]
// For better understanding, please follow the numbers of the next array consecutively:

// array = [[1,2,3],
//          [8,9,4],
//          [7,6,5]]
// snail(array) #=> [1,2,3,4,5,6,7,8,9]

// 3. Initial solution( complexity: time=>O() space=>O())

snail = function(arr) {
  let len = arr.length, start = 0;
  let ret = [];
  if (len === 1 && !arr[0][0]) return [];
  while (len > 0) {
    i = j = start;
    while (j < start + len)
      ret.push(arr[i][j++]);
    j--;
    if (len === 1) break;
    ret.pop();
    while (i < start + len)
      ret.push(arr[i++][j]);
    i--, ret.pop();

    while (j >= start)
      ret.push(arr[i][j--]);
    j++;
    ret.pop();
    while (i >= start)
      ret.push(arr[i--][j]);
    i++;
    ret.pop();

    (len -= 2), start++;
  }
  return ret;
};

// 4. Improved solution( complexity: time=>O() space=>O() )

snail = function(array) {
  var result;
  while (array.length) {
    // Steal the first row.
    result = (result ? result.concat(array.shift()) : array.shift());
    // Steal the right items.
    for (var i = 0; i < array.length; i++)
      result.push(array[i].pop());
    // Steal the bottom row.
    result = result.concat((array.pop() || []).reverse());
    // Steal the left items.
    for (var i = array.length - 1; i >= 0; i--)
      result.push(array[i].shift());
  }
  return result;
}
