// 1. Reflection

// - Solved
// - When I have to return new Object from thin air, come up with using reduce!

// 2. Problem

// Add a groupBy method to Array.prototype so that elements in an array could be grouped by the result of evaluating a function on each element.

// The method should return an object, in which for each different value returned by the function there is a property whose value is the array of elements that return the same value.

// If no function is passed, the element itself should be taken.

// 3. Initial solution( complexity: time=>O() space=>O())

Array.prototype.groupBy = function(fn) {
  let ret = {};
  if (fn) {
    this.forEach(i => {
      ret[fn(i)] = this.filter(e => fn(i) === fn(e));
    });
  } else {
    this.forEach(i => {
      if (ret[i]) {
        let val = ret[i];
        val.push(i);
      } else {
        ret[i] = [i];
      }
    });
  }
  return ret;
};

// 4. Improved solution( complexity: time=>O() space=>O() )

Array.prototype.groupBy = function(fn) {
  return this.reduce((a, c) => {
    let v = fn ? fn(c) : c;
    (a[v] = a[v] || []).push(c);
    return a;
  }, {});
};