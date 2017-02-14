// 1. Reflection

// - I solved it. 
// - Improved one is submitted by others, and used map for iterating.
// - Used String.prototype.charCodeAt(), String.fromCharCode()


// 2. Problem

// Find the missing letter in the passed letter range and return it.
//
// If all letters are present in the range, return undefined.

// 3. Initial solution

function fearNotLetter(str) {
  let first = str.charCodeAt(0), last = str.charCodeAt(str.length-1);
  console.log(first, last);
  for(let i = first; i<=last; i++){
    if(str.indexOf(String.fromCharCode(i)) < 0)
      return String.fromCharCode(i);
  }
  return undefined;
}

fearNotLetter("abce");


// 4. Improved solution

// Adding this solution for the sake of avoiding using 'for' and 'while' loops.
// See the explanation for reference as to why. It's worth the effort.

function fearNotLetter(str) {
  var compare = str.charCodeAt(0), missing;

  str.split('').map(function(letter,index) {
    if (str.charCodeAt(index) == compare) {
      ++compare;
    } else {
      missing = String.fromCharCode(compare);
    }
  });

  return missing;
}
