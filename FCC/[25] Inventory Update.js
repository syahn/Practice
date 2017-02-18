// 1. Reflection

// - I solved it.
// - I learned how to use Array.prototype.sort().

// 2. Problem

// impare and update the inventory stored in a 2D array against a second 2D array
// of a fresh delivery. Update the current existing inventory item quantities (in arr1).
// If an item cannot be found, add the new item and quantity into the inventory array.
// The returned inventory array should be in alphabetical order by item.

// 3. Initial solution

function updateInventory(arr1, arr2) {
    let obj = arr1.reduce((a, c) => {
      a[c[1]] = c[0];
      return a;
    },{});

    arr2.reduce((a,c) => {
      if(a.hasOwnProperty(c[1])) a[c[1]] += c[0];
      else a[c[1]] = c[0];
      return a;
    }, obj);

    let ret = [];

    for(let i in obj){
      ret.push([obj[i], i]);
    }
    return ret.sort((a,b) => {
      if(a[1] < b[1]) return -1;
      else return 1;
    });
    // return ret.sort((a,b) => a[1] < b[1] ? -1 : 1 );
}


// 4. Improved solution

function updateInventory(arr1, arr2) {
  var flag = 0;
  arr2.forEach(function(item) {
    flag = 0;
    arr1.forEach(function(list) {
      // If the product is already present, increase the quantity
      if(item[1] === list[1]) {
        list[0] += item[0];
        flag = 1;
      }
    });
    //If not already present, add the product
    if(flag === 0)
      arr1.push(item);
  });

  //Return the sorted inventory in alphabetical order by product name
  return arr1.sort(function(a, b) {
    return a[1] > b[1] ? 1 : -1;
  });
}
