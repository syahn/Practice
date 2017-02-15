// 1. Reflection

// - I failed to solve it. 
// - Finding gcd and lcd becomes to be easy when it's used with arrow function

// 2. Problem

// Find the smallest common multiple of the provided parameters that can be evenly
// divided by both, as well as by all sequential numbers in the range between these parameters.
//
// The range will be an array of two numbers that will not necessarily be in numerical order.
//
// e.g. for 1 and 3 - find the smallest common multiple of both 1 and 3 that is evenly divisible by all numbers between 1 and 3.


// 3. Initial solution

function smallestCommons(arr) {
  let first = arr[0], last = arr[1], ret=[];

  if(first > last){
    let temp = first;
    first = last;
    last = temp;
  }

  for( let i=first ; i<=last ; i++) ret.push(i);

  const gcd = (a, b) => !b ? a : gcd(b, a % b);
  const lcm = (a, b) => (a*b) /gcd(a,b);
  let small = first;

  ret.forEach(v => small = lcm(small, v));

  return small;
}

// 4. Improved solution


function smallestCommons(arr) {
  let first = Math.min(arr[0],arr[1]),
      last = Math.max(arr[0], arr[1]),
      ret=[];

  for( let i=first ; i<=last ; i++) ret.push(i);
  const gcd = (a, b) => !b ? a : gcd(b, a % b);
  const lcm = (a, b) => (a*b) /gcd(a,b);
  let small = first;

  ret.forEach(v => small = lcm(small, v));

  return small;
}
