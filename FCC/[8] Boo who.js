// 1. Reflection

// - I solved it. 
// - It's easy, but didn't come up with typeof hack.

// 2. Problem

// Check if a value is classified as a boolean primitive. Return true or false.
//
// Boolean primitives are true and false.

// 3. Initial solution

function booWho(bool) {
  return bool === true || bool === false;
}

booWho(null);


// 4. Improved solution

function booWho(bool) {
  return typeof bool === 'boolean';
}

booWho(null);
