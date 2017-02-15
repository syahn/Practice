// 1. Reflection

// - I solved it with help of googling. 
// - parseInt is huge win for solution.

// 2. Problem


// 3. Initial solution

function binaryAgent(str) {
  return str.split(' ').map(v => String.fromCharCode(parseInt(v, 2))).join('');
}

// 4. Improved solution
