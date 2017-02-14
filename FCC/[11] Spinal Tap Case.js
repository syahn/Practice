// 1. Reflection

// - I failed to solve it by myself. 
// - I need to learn Regex ASAP.

// 2. Problem
 // Convert a string to spinal case. Spinal case is all-lowercase-words-joined-by-dashes.

// 3. Initial solution


// 4. Improved solution

function spinalCase(str) {
  return str.replace(/([a-z])([A-Z])/g, '$1 $2').split(/\s+|_+/g).map(v => v.toLowerCase()).join('-');
}

function spinalCase(str) {
  return str.replace(/([a-z])([A-Z])/g, '$1 $2').split(/\s+|_+/g).join('-').toLowerCase();
}

function spinalCase(str) {
  return str.split(/\s|_|(?=[A-Z])/).join('-').toLowerCase()
}
