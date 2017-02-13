// 1. Reflection

// - I solved it. Quite easy.

// 2. Problem

// The DNA strand is missing the pairing element. Take each character, get its pair,
// and return the results as a 2d array.
//
// Base pairs are a pair of AT and CG. Match the missing element to the provided character.
//
// Return the provided character as the first element in each array.
//
// For example, for the input GCG, return [["G", "C"], ["C","G"],["G", "C"]]
//
// The character and its pair are paired up in an array, and all the arrays are
// grouped into one encapsulating array.

// 3. Initial solution

function pairElement(str) {
  let pair = { A: 'T', G: 'C', C: 'G', T: 'A' };
  let arrStr = str.split(''), ret = [];
  arrStr.forEach((c)=>{
    ret.push([c, pair[c]]);
  });
  return ret;
}

// 4. Improved solution
