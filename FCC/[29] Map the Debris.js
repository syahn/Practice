// 1. Reflection

// - I solved it with a hint. 
// - It's first time using Math.round()
// - Problem might be intended for alternating original obj, but I just made new one.

// 2. Problem

// Return a new array that transforms the element's average altitude into their orbital periods.
//
// The array will contain objects in the format {name: 'name', avgAlt: avgAlt}.
//
// You can read about orbital periods on wikipedia.
//
// The values should be rounded to the nearest whole number. The body being orbited is Earth.
//
// The radius of the earth is 6367.4447 kilometers, and the GM value of earth is 398600.4418 km3s-2.

// 3. Initial solution

function orbitalPeriod(arr) {
  var GM = 398600.4418;
  var earthRadius = 6367.4447;
  return arr.reduce((a,c) => {
    let obj = {};
    obj.name = c.name;
    obj.orbitalPeriod = Math.round(2 * Math.PI *
                        Math.sqrt(Math.pow(c.avgAlt + earthRadius, 3)/ GM));
    a.push(obj);
    return a;
  }, []);
}


// 4. Improved solution
